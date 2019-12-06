//
//  Person.hpp
//  Plant management
//
//  Created by SofiaGyrykovych.
//  Copyright © 2019 SofiaGyrykovych. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include <iostream>
#include <stdio.h>


class Person
{
public:
    Person(std::string first_name, std::string last_name, int s, int a); // constructor
    Person(std::string first_name, int a);
    std::string firstName;
    std::string lastName;
    int sex;
    std::string adress;
    std::string phone;
    int age;
    
    void display();
};


#endif /* Person_hpp */
