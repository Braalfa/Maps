#include <iostream>

int main1() {
    std::cout << "Hello, World!" << std::endl;

    float maxX=1000;
    float minX=-100;
    float minY=-100;
    float maxY=1000;

    float posX;
    float posY;

    std::pair<std::pair<float, float>, std::pair<float, float>> lines[17];

    lines[7]=std::make_pair(std::make_pair(0.2791546,-0.5461569),std::make_pair(0.2791546,-0.5461569));
    lines[8]=std::make_pair(std::make_pair(0.2791546,-0.5461569),std::make_pair(0.4009692,-0.5460777));
    lines[9]=std::make_pair(std::make_pair(0.4080485,0.1176059),std::make_pair(0.4009692,-0.5460777));
    lines[10]=std::make_pair(std::make_pair(0.4080485,0.1176059),std::make_pair(-1.060647,0.1253159));
    lines[11]=std::make_pair(std::make_pair(-1.047301,1.297969),std::make_pair(-1.060647,0.1253159));
    lines[12]=std::make_pair(std::make_pair(-1.047301,1.297969),std::make_pair(1.523449,1.305332));
    lines[13]=std::make_pair(std::make_pair(1.549175,0.8527526),std::make_pair(1.523449,1.305332));
    lines[14]=std::make_pair(std::make_pair(1.549175,0.8527526),std::make_pair(0.2731338,0.8594832));
    lines[15]=std::make_pair(std::make_pair(0.2736665,0.3481684),std::make_pair(0.2731338,0.8594832));
    lines[16]=std::make_pair(std::make_pair(0.2736665,0.3481684),std::make_pair(0.3859036,0.3441134));
    lines[0]=std::make_pair(std::make_pair(0.3961737,0.32721),std::make_pair(0.3897823,0.7537717));
    lines[1]=std::make_pair(std::make_pair(1.659773,0.7332771),std::make_pair(0.3897823,0.7537717));
    lines[2]=std::make_pair(std::make_pair(1.659773,0.7332771),std::make_pair(1.65338,1.358256));
    lines[3]=std::make_pair(std::make_pair(-1.191897,1.382526),std::make_pair(1.65338,1.358256));
    lines[4]=std::make_pair(std::make_pair(-1.191897,1.382526),std::make_pair(-1.179603,0.040144));
    lines[5]=std::make_pair(std::make_pair(0.2771788,0.04425133),std::make_pair(-1.179603,0.040144));
    lines[6]=std::make_pair(std::make_pair(0.2771788,0.04425133),std::make_pair(0.2791546,-0.5461569));

    float const posXini=-1.35;
    posX=posXini;
    posY=1.58;
    int const x=100;
    int const y=100;
    int map[x][y]={0};
    float stepX=(float )(1.86-posX)/x;
    float stepY=(float )-(0.7846+posY)/y;


    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(posX<minX || posX>maxX || posY>maxY|| posY<minY){
                map[i][j]=1;
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
                    map[i][j]=1;
                }
            }
            posX+=stepX;
            std::cout<<map[i][j];
        }
        std::cout<<"\n";
        posX=posXini;
        posY+=stepY;
    }

    return 0;
}
