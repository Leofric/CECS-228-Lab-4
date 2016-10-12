//
//  Hare.cpp
//  LabP4
//
//  Created by Alex Berthon on 9/17/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include "Hare.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

void Hare::moveHare(){
        int rng = (rand()%10 + 1);
        //sleep
        if(rng == 1 | rng == 2){
            move(0);
        }
        
        //big hop
        else if(rng == 3 | rng == 4){
            move(9);
        }
    
        //big slip
        else if(rng == 5 | rng == 6){
            move(-12);
        }
    
        //small hop
        else if(rng == 7 | rng == 8){
            move(1);
        }
    
        //small slip
        else if(rng >= 9){
            move(-2);
        }
}

