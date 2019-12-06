//
//  Profession.hpp
//  PlantManagement
//
//  Created by SofiaGyrykovych.
//  Copyright © 2019 SofiaGyrykovych. All rights reserved.
//

#ifndef Profession_hpp
#define Profession_hpp

#include <iostream>
#include <stdio.h>

struct Profession {
public:
    Profession(std::string n,float rate);
    std::string name;
    float baseRate;
    void display();
};

#endif /* Profession_hpp */

