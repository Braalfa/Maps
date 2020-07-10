//
// Created by alfab on 7/8/2020.
//

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    float posX;
    float posY;


    float const posXini=-2.385236;
    posY=3.429452;

    posX=posXini;
    int const x=100;
    int const y=100;
    int map[x][y]={0};
    float stepX=(float )(2.426883-posX)/x;
    float stepY=(float )-(3.098883+posY)/y;

    std::pair<std::pair<float, float>, std::pair<float, float>> boxes[13];
    boxes[0]=std::make_pair(std::make_pair(-0.3769179,1.034334),std::make_pair(0.1987051,2.111545));
    boxes[1]=std::make_pair(std::make_pair(-0.9203816,0.1490138),std::make_pair(1.25057,0.3409044));
    boxes[2]=std::make_pair(std::make_pair(0.9730003,0.3506214),std::make_pair(0.2338164,1.375238));
    boxes[3]=std::make_pair(std::make_pair(0.6398845,0.1665456),std::make_pair(0.93501,0.3409055));
    boxes[4]=std::make_pair(std::make_pair(0.03506237,1.21841),std::make_pair(1.022666,0.3409052));
    boxes[5]=std::make_pair(std::make_pair(-1.761873,1.192113),std::make_pair(0.1987057,1.094741));
    boxes[6]=std::make_pair(std::make_pair(1.323597,-1.200879),std::make_pair(0.2337668,1.042149));
    boxes[7]=std::make_pair(std::make_pair(1.577798,-1.20088),std::make_pair(0.7071061,0.3058423));
    boxes[8]=std::make_pair(std::make_pair(-0.03506182,-1.218411),std::make_pair(0.2863601,1.042149));
    boxes[9]=std::make_pair(std::make_pair(0.1840765,-1.218411),std::make_pair(0.7246372,0.3058424));
    boxes[10]=std::make_pair(std::make_pair(-0.3769179,-2.077434),std::make_pair(0.2688295,0.7265873));
    boxes[11]=std::make_pair(std::make_pair(-1.455079,-1.0431),std::make_pair(0.2512989,1.427833));
    boxes[12]=std::make_pair(std::make_pair(-1.981012,-1.192115),std::make_pair(1.197977,0.3233733));

    std::pair<std::pair<float, float>, std::pair<float, float>> lines[38];
    lines[0]=std::make_pair(std::make_pair(0.523513,3.073488),std::make_pair(0.5557855,2.794999));
    lines[1]=std::make_pair(std::make_pair(1.169188,2.797978),std::make_pair(0.5557855,2.794999));
    lines[2]=std::make_pair(std::make_pair(1.169188,2.797978),std::make_pair(1.177355,2.447335));
    lines[3]=std::make_pair(std::make_pair(1.882792,2.453891),std::make_pair(1.177355,2.447335));
    lines[4]=std::make_pair(std::make_pair(1.882792,2.453891),std::make_pair(1.878365,2.208471));
    lines[5]=std::make_pair(std::make_pair(1.86429,2.050333),std::make_pair(1.878365,2.208471));
    lines[6]=std::make_pair(std::make_pair(1.86429,2.050333),std::make_pair(0.8812152,2.04221));
    lines[7]=std::make_pair(std::make_pair(0.8809078,1.759764),std::make_pair(0.8812152,2.04221));
    lines[8]=std::make_pair(std::make_pair(0.8809078,1.759764),std::make_pair(1.894064,1.768565));
    lines[9]=std::make_pair(std::make_pair(1.880747,2.030602),std::make_pair(1.894064,1.768565));
    lines[10]=std::make_pair(std::make_pair(1.880747,2.030602),std::make_pair(1.891304,2.077742));
    lines[11]=std::make_pair(std::make_pair(2.426883,2.08892),std::make_pair(1.891304,2.077742));
    lines[12]=std::make_pair(std::make_pair(2.426883,2.08892),std::make_pair(2.395229,-2.072324));
    lines[13]=std::make_pair(std::make_pair(1.858482,-2.053136),std::make_pair(2.395229,-2.072324));
    lines[14]=std::make_pair(std::make_pair(1.858482,-2.053136),std::make_pair(1.83117,-2.411874));
    lines[15]=std::make_pair(std::make_pair(1.176483,-2.406844),std::make_pair(1.83117,-2.411874));
    lines[16]=std::make_pair(std::make_pair(1.176483,-2.406844),std::make_pair(1.162829,-2.771571));
    lines[17]=std::make_pair(std::make_pair(0.5141679,-2.759002),std::make_pair(1.162829,-2.771571));
    lines[18]=std::make_pair(std::make_pair(0.5141679,-2.759002),std::make_pair(0.5311329,-3.066483));
    lines[19]=std::make_pair(std::make_pair(-0.4680389,-3.098883),std::make_pair(0.5311329,-3.066483));
    lines[20]=std::make_pair(std::make_pair(-0.4680389,-3.098883),std::make_pair(-0.5089878,-2.739259));
    lines[21]=std::make_pair(std::make_pair(-1.192661,-2.726238),std::make_pair(-0.5089878,-2.739259));
    lines[22]=std::make_pair(std::make_pair(-1.192661,-2.726238),std::make_pair(-1.196069,-2.364724));
    lines[23]=std::make_pair(std::make_pair(-1.856314,-2.398438),std::make_pair(-1.196069,-2.364724));
    lines[24]=std::make_pair(std::make_pair(-1.856314,-2.398438),std::make_pair(-1.86599,-2.034106));
    lines[25]=std::make_pair(std::make_pair(-2.385236,-2.034304),std::make_pair(-1.86599,-2.034106));
    lines[26]=std::make_pair(std::make_pair(-2.385236,-2.034304),std::make_pair(-2.359861,2.092051));
    lines[27]=std::make_pair(std::make_pair(-1.891614,2.105363),std::make_pair(-2.359861,2.092051));
    lines[28]=std::make_pair(std::make_pair(-1.891614,2.105363),std::make_pair(-1.868299,2.481336));
    lines[29]=std::make_pair(std::make_pair(-1.15357,2.48364),std::make_pair(-1.868299,2.481336));
    lines[30]=std::make_pair(std::make_pair(-1.15357,2.48364),std::make_pair(-1.171446,2.804253));
    lines[31]=std::make_pair(std::make_pair(-0.5074055,2.814798),std::make_pair(-1.171446,2.804253));
    lines[32]=std::make_pair(std::make_pair(-0.5074055,2.814798),std::make_pair(-0.5020517,3.099518));
    lines[33]=std::make_pair(std::make_pair(-0.1688647,3.134092),std::make_pair(-0.5020517,3.099518));
    lines[34]=std::make_pair(std::make_pair(-0.1688647,3.134092),std::make_pair(-0.1621634,3.429452));
    lines[35]=std::make_pair(std::make_pair(0.1786746,3.425632),std::make_pair(-0.1621634,3.429452));
    lines[36]=std::make_pair(std::make_pair(0.1786746,3.425632),std::make_pair(0.1853982,3.120261));
    lines[37]=std::make_pair(std::make_pair(0.5147375,3.113836),std::make_pair(0.1853982,3.120261));


    for(auto & i : map){
        for(int & j : i){
            int linesAtRigth = 0;
            for(std::pair<std::pair<float, float>, std::pair<float, float>> line :lines){
                if((line.first.second<posY && line.second.second>posY)
                   || (line.first.second>posY && line.second.second<posY)){
                    double m = (line.second.second-line.first.second)/(line.second.first-line.first.first);
                    //Se chequea si esta a la derecha
                    double yprima=m*(posX-line.first.first) + line.first.second;
                    if((m>0 && posY>yprima) || (m<0 && posY<yprima)){
                        linesAtRigth++;
                    }
                }
            }
            if(linesAtRigth%2==1){
                j=0;
            } else{
                j=1;
            }
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
        posX=posXini;
        std::cout<<"\n";
        posY+=stepY;
    }
    return 0;
}
