#include <iostream>
int main3() {
    std::cout << "Hello, World!" << std::endl;

    float posX;
    float posY;

    float const posXini=-2.510544-0.1741481/2;
    posY=3.294635+0.2907295/2;

    posX=posXini;
    int const x=100;
    int const y=100;
    int map[x][y]={0};
    float stepX=(float )(2.501808+0.1563845/2-posX)/x;
    float stepY=(float )-(3.294635+0.2907293/2+posY)/y;

    std::pair<std::pair<float, float>, std::pair<float, float>> boxes[13];
    boxes[0]=std::make_pair(std::make_pair(0,-3.294635),std::make_pair(5.16,0.2907293));
    boxes[1]=std::make_pair(std::make_pair(2.501808,-0.8280637),std::make_pair(0.1563845,5.223873));
    boxes[2]=std::make_pair(std::make_pair(-2.510544,0),std::make_pair(0.1741481,6.88));
    boxes[3]=std::make_pair(std::make_pair(-0.9954384,-1.523989),std::make_pair(3.169123,0.3083477));
    boxes[4]=std::make_pair(std::make_pair(-0.3876052,-1.039484),std::make_pair(0.2620921,2.792537));
    boxes[5]=std::make_pair(std::make_pair(-1.453517,-2.91584),std::make_pair(0.2092361,1.04832));
    boxes[6]=std::make_pair(std::make_pair(0.9954368,-2.748466),std::make_pair(0.244475,1.383069));
    boxes[7]=std::make_pair(std::make_pair(1.021865,1.594463),std::make_pair(3.116269,0.308347));
    boxes[8]=std::make_pair(std::make_pair(2.04373,-1.849928),std::make_pair(1.072539,0.2554924));
    boxes[9]=std::make_pair(std::make_pair(0.4185932,2.501809),std::make_pair(0.1916175,1.876383));
    boxes[10]=std::make_pair(std::make_pair(-1.44046,1.21142),std::make_pair(0.2268567,1.101176));
    boxes[11]=std::make_pair(std::make_pair(-1.378481,2.585968),std::make_pair(1.777272,0.3083477));
    boxes[12]=std::make_pair(std::make_pair(-1.015998,3.423958),std::make_pair(3.0138,0.03334141));


    for(auto & i : map){
        for(int & j : i){
                for(std::pair<std::pair<float, float>, std::pair<float, float>> box :boxes){
                    //Se chequea si esta adentro
                    if(posX>=box.first.first-box.second.first/2
                       && posX<=box.first.first+box.second.first/2
                       && posY>=box.first.second-box.second.second/2
                       && posY<=box.first.second+box.second.second/2
                            ){
                        j=1;
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


