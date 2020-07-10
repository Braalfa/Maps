//
// Created by alfab on 7/9/2020.
//

//
// Created by alfab on 7/8/2020.
//

#include <iostream>

int main5() {
    std::cout << "Hello, World!" << std::endl;

    float posX;
    float posY;

    float const posXini=-2.559767-0.04046583/2;
    posY=3.413361+0.05327868/2;

    posX=posXini;
    int const x=100;
    int const y=100;
    int map[x][y]={0};
    float stepX=(float )(2.559765+0.04047036/2-posX)/x;
    float stepY=(float )-(3.413362+0.05327725/2+posY)/y;


    std::pair<std::pair<float, float>, std::pair<float, float>> boxes[9];
    boxes[0]=std::make_pair(std::make_pair(-0.6067969,-2.221033),std::make_pair(0.07106328,2.388376));
    boxes[1]=std::make_pair(std::make_pair(0.6883833,-2.248719),std::make_pair(0.07106304,2.382562));
    boxes[2]=std::make_pair(std::make_pair(2.559765,0),std::make_pair(0.04047036,6.88));
    boxes[3]=std::make_pair(std::make_pair(-0.7179254,-3.195916),std::make_pair(0.4199085,0.4832973));
    boxes[4]=std::make_pair(std::make_pair(0.7991344,-3.190347),std::make_pair(0.4395276,0.4993067));
    boxes[5]=std::make_pair(std::make_pair(0.811525,-1.976157),std::make_pair(0.4643056,0.7718787));
    boxes[6]=std::make_pair(std::make_pair(-0.7000183,-1.969961),std::make_pair(0.4643056,0.8338289));
    boxes[7]=std::make_pair(std::make_pair(0,-3.413362),std::make_pair(5.16,0.05327725));
    boxes[8]=std::make_pair(std::make_pair(0,3.413361),std::make_pair(5.16,0.05327725));

    std::pair<std::pair<float, float>, std::pair<float, float>> lines[8];
    lines[0]=std::make_pair(std::make_pair(-1.706157,0.0004076004),std::make_pair(-1.955679,-0.01228752));
    lines[1]=std::make_pair(std::make_pair(-1.935856,-1.042835),std::make_pair(-1.955679,-0.01228752));
    lines[2]=std::make_pair(std::make_pair(-1.935856,-1.042835),std::make_pair(-1.540004,-1.051228));
    lines[3]=std::make_pair(std::make_pair(-1.609588,-1.418215),std::make_pair(-1.540004,-1.051228));
    lines[4]=std::make_pair(std::make_pair(-1.609588,-1.418215),std::make_pair(-1.185571,-1.432022));
    lines[5]=std::make_pair(std::make_pair(-1.165332,-1.039752),std::make_pair(-1.185571,-1.432022));
    lines[6]=std::make_pair(std::make_pair(-1.165332,-1.039752),std::make_pair(-0.6262863,-1.034991));
    lines[7]=std::make_pair(std::make_pair(-0.7378401,-1.023978),std::make_pair(-0.6262863,-1.034991));

    std::pair<std::pair<float, float>, std::pair<float, float>> line1[9];
    line1[0]=std::make_pair(std::make_pair(1.959759,-0.009638977),std::make_pair(1.961241,-1.025579));
    line1[1]=std::make_pair(std::make_pair(1.545361,-1.031822),std::make_pair(1.961241,-1.025579));
    line1[2]=std::make_pair(std::make_pair(1.545361,-1.031822),std::make_pair(1.527112,-1.455899));
    line1[3]=std::make_pair(std::make_pair(1.210562,-1.444552),std::make_pair(1.527112,-1.455899));
    line1[4]=std::make_pair(std::make_pair(1.210562,-1.444552),std::make_pair(1.205524,-1.039037));
    line1[5]=std::make_pair(std::make_pair(0.9792609,-1.060015),std::make_pair(1.205524,-1.039037));
    line1[6]=std::make_pair(std::make_pair(0.9792609,-1.060015),std::make_pair(0.7219454,-1.043258));
    line1[7]=std::make_pair(std::make_pair(1.780526,0.01554718),std::make_pair(0.7219454,-1.043258));
    line1[8]=std::make_pair(std::make_pair(1.780526,0.01554718),std::make_pair(1.924579,0));

    for(auto & i : map){
        for(int & j : i){
                for(std::pair<std::pair<float, float>, std::pair<float, float>> box :boxes){
                    //Se chequea si esta adentro
                    if(posX>box.first.first-box.second.first/2
                       && posX<box.first.first+box.second.first/2
                       && posY>box.first.second-box.second.second/2
                       && posY<box.first.second+box.second.second/2
                            ){
                        j=1;
                    }
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
                        j=1;
                    }

                    linesAtRigth = 0;
                    for(std::pair<std::pair<float, float>, std::pair<float, float>> line :line1){
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
                        j=1;
                    }
                }

            posX+=stepX;
            std::cout<<j;
        }
        posX=posXini;
        posY+=stepY;
        std::cout<<"\n";
    }

    return 0;
}