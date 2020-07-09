#include <iostream>
int main() {
    std::cout << "Hello, World!" << std::endl;



    float maxX=100;
    float minX=-100;
    float minY=-100;
    float maxY=100;

    float posX;
    float posY;

    std::pair<std::pair<float, float>, std::pair<float, float>> lines[1];
    box1[0]=std::make_pair(std::make_pair(0,-3.294635),std::make_pair(5.16,0.2907293));
    box2[0]=std::make_pair(std::make_pair(2.501808,-0.8280637),std::make_pair(0.1563845,5.223873));
    box3[0]=std::make_pair(std::make_pair(-2.510544,0),std::make_pair(0.1741481,6.88));
    box4[0]=std::make_pair(std::make_pair(-0.9954384,-1.523989),std::make_pair(3.169123,0.3083477));
    box5[0]=std::make_pair(std::make_pair(-0.3876052,-1.039484),std::make_pair(0.2620921,2.792537));
    box6[0]=std::make_pair(std::make_pair(-1.453517,-2.91584),std::make_pair(0.2092361,1.04832));
    box7[0]=std::make_pair(std::make_pair(0.9954368,-2.748466),std::make_pair(0.244475,1.383069));
    box8[0]=std::make_pair(std::make_pair(1.021865,1.594463),std::make_pair(3.116269,0.308347));
    box9[0]=std::make_pair(std::make_pair(2.04373,-1.849928),std::make_pair(1.072539,0.2554924));
    box10[0]=std::make_pair(std::make_pair(0.4185932,2.501809),std::make_pair(0.1916175,1.876383));
    box11[0]=std::make_pair(std::make_pair(-1.44046,1.21142),std::make_pair(0.2268567,1.101176));
    box12[0]=std::make_pair(std::make_pair(-1.378481,2.585968),std::make_pair(1.777272,0.3083477));
    box13[0]=std::make_pair(std::make_pair(-1.015998,3.423958),std::make_pair(3.0138,0.03334141));

    int const x=100;
    int const y=100;
    int map[x][y]={0};
    float stepX=4.0/x;
    float stepY=4.0/y;
    posX=-2;
    posY=-2;

    for(auto & i : map){
        for(int & j : i){
            if(posX<minX || posX>maxX || posY>maxY|| posY<minY){
                j=1;
            }else{
                int linesAtRigth = 0;
                for(std::pair<std::pair<float, float>, std::pair<float, float>> line :lines){
                    //Se chequea si esta a la derecha
                    if((line.first.first+line.second.first)/2>posX &&
                       ((line.first.second<posY && line.second.second>posY)
                        || (line.first.second>posY && line.second.second<posY))){
                        linesAtRigth++;
                    }
                }
                if(linesAtRigth%2==1){
                    j=1;
                }
            }
            posX+=stepX;
            std::cout<<j;
        }
        std::cout<<"\n";
        posX=-2;
        posY+=stepY;
    }

    return 0;
}


