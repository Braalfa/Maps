#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    float maxX;
    float minX;
    float minY;
    float maxY;

    float posX;
    float posY;

    std::pair<std::pair<float, float>, std::pair<float, float>> lines[10];
    lines[1]=std::make_pair(std::make_pair(1,2),std::make_pair(4,5));

    int map[100][100]={0};
    float stepX=2/100;
    float stepY=2/100;

    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
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
        }
        posX=0;
        posY+=stepY;
    }
    return 0;
}
