//
//  Equipment.cpp
//  PlantManagement
//
//  Created by SofiaGyrykovych
//  Copyright © 2019 SofiaGyrykovych. All rights reserved.
//

#include "Equipment.hpp"

Equipment :: Equipment(std::string n, EquipCondition cond, float cst)
{
    name = n;
    condition = cond;
    cost = cst;
    std::cout << "Creating new equipment:" << std::endl;
    display();
}
void Equipment :: display()
{
    std::cout << "Equipment : "<< name << " "<< condition << " " << cost << std::endl;
}
