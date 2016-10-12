//
//  Animal.hpp
//  LabP4
//
//  Created by Alex Berthon on 9/17/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>

class Animal{
    
public:
    Animal();
    int getPositon();
    
protected:
    void move(int);
    
private: int position;
    
};

#endif /* Animal_hpp */
