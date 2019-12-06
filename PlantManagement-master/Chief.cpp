//
//  Chief.cpp
//  Plant management
//
//  Created by Sofia Gyrykovych.
//  Copyright © 2019 SofiaGyrykovych. All rights reserved.
//

#include "Chief.hpp"

Chief :: Chief(std::string first_name,
               std::string last_name,
               int s, int a) : Person(first_name, last_name, s, a)
{
    std::cout << "Creating chief... " << std::endl;
    display();
}
void Chief :: display()
{
    std::cout << "Chief: " << firstName << " "<< lastName
    << " phone: " << phone
    << "\n"
    << std::endl;
}

void Chief :: addEmployee(Employee *employee)
{
    employees.push_back(employee);
    display();
    std::cout << "add employee ..."<< std::endl;
    employee->display();
}

float Chief :: costOfProducts()
{
    float cost = 0.0;
    for(Employee *empl : employees) cost+=empl->productsCost();
    return cost;
}

float Chief :: costOfEquipments()
{
    float cost = 0.0;
    for(Employee *empl : employees) cost+=empl->equipmentsCost();
    return cost;
}

void Chief :: displayEmployeesList()
{
    for(Employee *empl : employees) empl->display();
}
