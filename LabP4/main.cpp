//
//  main.cpp
//  LabP4
//
//  Created by Alex Berthon on 9/12/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include "Hare.hpp"
#include "Tortoise.hpp"
#include <iostream>

using namespace std;

void printTortoisePositon(Tortoise);
void printHarePositon(Hare);


int main(int argc, const char * argv[]) {
    srand((unsigned)time(0));
    Hare hare;
    Tortoise tortoise;
    cout<<"BANG !!!"<<endl;
    cout<<"AND THE'RE OFF !!!"<<endl;
    
    //main game loop
    for(int i = 0; i<70; i++){
        hare.moveHare();
        tortoise.moveTortoise();
    
        //printing the line
        for(int i = 1; i<71; i++){
            if(i == hare.getPositon() && i == tortoise.getPositon()){
                cout<<"Ouch!";
            }
            else if(i == hare.getPositon()){
                cout<<"H";
            }
            else if(i == tortoise.getPositon()){
                cout<<"T";
            }
            else cout<<"-";
        }
        cout<<"\n"<<endl;
        
        if(hare.getPositon() >= 70 && tortoise.getPositon() == 70){
            cout<<"It's a tie"<<endl;
            i = 70;
        }
        else if (hare.getPositon() >= 70){
            cout<<"Hare wins. yuch."<<endl;
            i = 70;
        }
        else if (tortoise.getPositon() >= 70) {
            cout<<"TORTOISE WINS YAY !!!"<<endl;
            i = 70;
        }
        else if(i == 69 && tortoise.getPositon() < 70 && hare.getPositon() <70){
            i = 0;
        }
    }
    return 0;
}