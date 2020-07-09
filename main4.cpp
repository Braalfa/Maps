//
// Created by alfab on 7/8/2020.
//


int main() {
    std::cout << "Hello, World!" << std::endl;

    float maxX;
    float minX;
    float minY;
    float maxY;

    float posX;
    float posY;

    std::pair<std::pair<float, float>, std::pair<float, float>> box[10];
    box[0]=std::make_pair(std::make_pair(-0.3769179,1.034334),std::make_pair(0.1987051,2.111545));
    box[1]=std::make_pair(std::make_pair(-0.9203816,0.1490138),std::make_pair(1.25057,0.3409044));
    box[2]=std::make_pair(std::make_pair(0.9730003,0.3506214),std::make_pair(0.2338164,1.375238));
    box[3]=std::make_pair(std::make_pair(0.6398845,0.1665456),std::make_pair(0.93501,0.3409055));
    box[4]=std::make_pair(std::make_pair(0.03506237,1.21841),std::make_pair(1.022666,0.3409052));
    box[5]=std::make_pair(std::make_pair(-1.761873,1.192113),std::make_pair(0.1987057,1.094741));
    box[6]=std::make_pair(std::make_pair(1.323597,-1.200879),std::make_pair(0.2337668,1.042149));
    box[7]=std::make_pair(std::make_pair(1.577798,-1.20088),std::make_pair(0.7071061,0.3058423));
    box[8]=std::make_pair(std::make_pair(-0.03506182,-1.218411),std::make_pair(0.2863601,1.042149));
    box[9]=std::make_pair(std::make_pair(0.1840765,-1.218411),std::make_pair(0.7246372,0.3058424));
    box[10]=std::make_pair(std::make_pair(-0.3769179,-2.077434),std::make_pair(0.2688295,0.7265873));
    box[11]=std::make_pair(std::make_pair(-1.455079,-1.0431),std::make_pair(0.2512989,1.427833));
    box[12]=std::make_pair(std::make_pair(-1.981012,-1.192115),std::make_pair(1.197977,0.3233733));

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
                    //Se chequea si esta adentro
                    if(posX>line.first.first-line.second.first/2
                        && posX<line.first.first+line.second.first/2
                        && posY>line.first.second-line.second.second/2
                        && posY<line.first.second+line.second.second/2
                        ){
                        map[i][j]=1;
                    }
                }
            }
            posX+=stepX;
            cout<<map[i][j];
        }
        posX=0;
        posY+=stepY;
    }

    return 0;
}
