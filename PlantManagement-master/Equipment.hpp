//
//  Equipment.hpp
//  PlantManagement
//
//  Created by SofiaGyrykovych.
//  Copyright © 2019 SofiaGyrykovych. All rights reserved.
//

#ifndef Equipment_hpp
#define Equipment_hpp

#include <iostream>
#include <stdio.h>

#endif /* Equipment_hpp */

enum EquipCondition {
    perfect,
    satisfactory,
    bad
};

struct Equipment {
public:
    Equipment(std::string n, EquipCondition cond, float cst);
    std::string name;
    EquipCondition condition;
    float cost = 1.0;
    void display();
};
