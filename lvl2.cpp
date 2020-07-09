
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;



    float maxX=100;
    float minX=-100;
    float minY=-100;
    float maxY=100;

    float posX;
    float posY;

    std::pair<std::pair<float, float>, std::pair<float, float>> boxes[18];
    boxes[0]=std::make_pair(std::make_pair(1.201707,2.25139),std::make_pair(1.405395,0.2905586));
    boxes[1]=std::make_pair(std::make_pair(-0.333003,2.236911),std::make_pair(0.362951,0.3484726));
    boxes[2]=std::make_pair(std::make_pair(-1.70845,2.236911),std::make_pair(0.362951,0.3484726));
    boxes[3]=std::make_pair(std::make_pair(-0.9917699,1.88943),std::make_pair(0.3774292,0.3195157));
    boxes[4]=std::make_pair(std::make_pair(1.020727,1.932865),std::make_pair(0.377429,0.4063857));
    boxes[5]=std::make_pair(std::make_pair(-0.6732453,1.208946),std::make_pair(0.1892101,1.709442));
    boxes[6]=std::make_pair(std::make_pair(1.79532,0.4850261),std::make_pair(0.1892101,1.709442));
    boxes[7]=std::make_pair(std::make_pair(1.520231,1.208946),std::make_pair(0.7104316,0.2905586));
    boxes[8]=std::make_pair(std::make_pair(1.715689,-0.2533717),std::make_pair(0.377429,0.2326462));
    boxes[9]=std::make_pair(std::make_pair(1.020726,0.4922661),std::make_pair(0.3774295,0.3339942));
    boxes[10]=std::make_pair(std::make_pair(1.187227,-2.200715),std::make_pair(0.7393889,0.305038));
    boxes[11]=std::make_pair(std::make_pair(1.541949,-1.874951),std::make_pair(0.7828232,0.3195167));
    boxes[12]=std::make_pair(std::make_pair(-0.1665014,-2.555435),std::make_pair(1.419873,0.2616034));
    boxes[13]=std::make_pair(std::make_pair(-1.903908,-1.520231),std::make_pair(0.6959538,0.2760816));
    boxes[14]=std::make_pair(std::make_pair(2.235174e-08,-1.88219),std::make_pair(0.3919079,0.3339949));
    boxes[15]=std::make_pair(std::make_pair(0.3474813,-1.368207),std::make_pair(0.3919079,0.6959553));
    boxes[16]=std::make_pair(std::make_pair(-0.188219,-0.8542247),std::make_pair(0.7104323,0.3339951));
    boxes[17]=std::make_pair(std::make_pair(-0.7022017,-1.201706),std::make_pair(0.3774292,0.3339945));

    float const posXini=-4;
    posY=4;

    posX=posXini;
    int const x=100;
    int const y=100;
    int map[x][y]={0};
    float stepX=(float )(4-posX)/x;
    float stepY=(float )-(4+posY)/y;

    for(auto & i : map){
        for(int & j : i){
            if(posX<minX || posX>maxX || posY>maxY|| posY<minY){
                j=1;
            }else{
                for(std::pair<std::pair<float, float>, std::pair<float, float>> box :boxes){
                    //Se chequea si esta adentro
                    if(posX>box.first.first-box.second.first/2
                       && posX<box.first.first+box.second.first/2
                       && posY>box.first.second-box.second.second/2
                       && posY<box.first.second+box.second.second/2
                            ){
                        j=1;
                    }
                }
            }
            posX+=stepX;
            std::cout<<j;
        }
        std::cout<<"\n";
        posX=posXini;
        posY+=stepY;
    }

    return 0;
}