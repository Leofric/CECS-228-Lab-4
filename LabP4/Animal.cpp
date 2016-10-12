//
//  Animal.cpp
//  LabP4
//
//  Created by Alex Berthon on 9/17/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include "Animal.hpp"

Animal::Animal(){
        position = 1;
}
    
int Animal::getPositon(){
        return position;
}
    
void Animal::move(int distance){
        if(position + distance<1){
            position = 1;
        }
        else if(position + distance>70){
            position = 70;
        }
        else position += distance;
}