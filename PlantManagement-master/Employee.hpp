//
//  Employee.hpp
//  Plant management
//
//  Created by SofiaGyrykovych.
//  Copyright © 2019 SofiaGyrykovych. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp


#include <stdio.h>
#include <vector>
#include "Person.hpp"
#include "Profession.hpp"
#include "Equipment.hpp"
#include "Product.hpp"


const float EXPERIANCE_PAY = 100.0;
const float PRODUCT_PAY = 250.0;


class Employee : public Person
{
public:
    Employee(std::string first_name,
             std::string last_name,
             int s, int a,
             std::string compny,
             Profession *prof,
             int exp); // constructor
    
    std::string company;
    std::string workPhone;
    std::string email;
    Profession *profession;
    int experience;
    float seeSalary();
    float paySalary();
    float productsCost();
    float equipmentsCost();
    void makeProduct(std::string vendor, std::string name, float costCoef);
    void pickEquipment(Equipment *equipment);
    void displayProductsList();
    void displayEquipmentsList();
    void display();
    
private:
    std::vector<Product> products;
    std::vector<Equipment*> equipments;
};
#endif /* Employee_hpp */
