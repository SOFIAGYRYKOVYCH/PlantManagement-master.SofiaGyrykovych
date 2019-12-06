//
//  Profession.cpp
//  PlantManagement
//
//  Created by SofiaGyrykovych.
//  Copyright © 2019 SofiaGyrykovych. All rights reserved.
//

#include "Profession.hpp"

Profession :: Profession(std::string n, float rate)
{
    name = n;
    baseRate = rate;
    std::cout << "Creating new profession:" << std::endl;
    display();
}

void Profession:: display()
{
    std::cout << "Profession: " << name << " base rate "<< baseRate << std::endl;
}
