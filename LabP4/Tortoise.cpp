//
//  Tortoise.cpp
//  LabP4
//
//  Created by Alex Berthon on 9/17/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include "Tortoise.hpp"
#include <ctime>
#include <cstdlib>

void Tortoise::moveTortoise(){
        int rng = (rand()%10 + 1);
        
        //fast plod
        if(rng>=1 && rng<=5){
            move(3);
        }
        
        //slip
        if(rng == 6 || rng == 7){
            move(-6);
        }
        
        //slow plod
        if(rng>=8){
            move(1);
        }
}
