//
//  Chief.hpp
//  Plant management
//
//  Created by SofiaGyrykovych.
//  Copyright © SofiaGyrykovych. All rights reserved.
//

#ifndef Chief_hpp
#define Chief_hpp

#include <stdio.h>
#include "Employee.hpp"

class Chief : public Person
{
public:
    Chief(std::string first_name,
          std::string last_name,
          int s, int a); // constructor
    std::string company;
    std::string workPhone;
    std::string email;
    
    void addEmployee(Employee *employee);
    float costOfEquipments();
    float costOfProducts();
    void display();
    void displayEmployeesList();
private:
    std::vector<Employee*> employees;
};
#endif /* Chief_hpp */
