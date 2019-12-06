//
//  main.cpp
//  PlantManagement
//
//  Created by SofiaGyrykovych.
//  Copyright © 2019 SofiaGyrykovych. All rights reserved.
//

#include <iostream>
#include "Chief.hpp"
#include "Person.hpp"
#include "Employee.hpp"


int main(int argc, const char * argv[]) {
    
    std::string company = "Horns and hooves";
    
    Profession *mechanic = new Profession("Механик", 1200.0);
    Profession *tokar = new Profession("Токарь", 1100.0);
    Profession *driver = new Profession("Драйвер", 1800.0);
    Profession *johnwick = new Profession("Джон Уик", 7000.0);
    
    Chief *chief = new Chief("Black", "Jack", 1, 79);
    
    Employee *Jason = new Employee("Jason", "Statham", 1, 24, company, mechanic, 3);
    Employee *Rayan = new Employee("Rayan", "Gosling", 1, 35, company, driver, 6);
    Employee *Keanu = new Employee("Keanu", "Reeves", 1, 54, company, johnwick, 54);
    Employee *Sanya = new Employee("Саня", "Савчук", 1, 19, company, tokar, 0);
    
    Equipment *mustang = new Equipment("Мустанг 1965", perfect, 250000.0);
    Equipment *gun = new Equipment("Big gun", satisfactory, 2000.0);
    Equipment *horse = new Equipment("Wild horse", bad, 600.0);
    
    chief->addEmployee(Jason);
    chief->addEmployee(Rayan);
    chief->addEmployee(Keanu);
    chief->addEmployee(Sanya);
    chief->displayEmployeesList();
    
    Jason->pickEquipment(gun);
    Keanu->pickEquipment(horse);
    Rayan->pickEquipment(mustang);
    Sanya->pickEquipment(mustang);
    Sanya->pickEquipment(horse);
    Sanya->pickEquipment(gun);
    Sanya->displayEquipmentsList();
    
    Jason->makeProduct("t345902", "table", 1.2);
    Jason->makeProduct("t345902", "table", 1.2);
    Jason->makeProduct("t345902", "table", 1.2);
    Jason->makeProduct("t345902", "table", 1.2);
    Jason->makeProduct("t343890", "stool", 1.0);
    
    Sanya->makeProduct("l007", "laba", 1.9);
    Sanya->makeProduct("l007", "laba", 1.9);
    Sanya->makeProduct("l007", "laba", 1.9);
    Sanya->makeProduct("l007", "laba", 1.9);
    Sanya->makeProduct("l007", "laba", 1.9);
    Sanya->makeProduct("s80033", "sofa", 3.8);
    
    Sanya->displayProductsList();
    Jason->displayProductsList();
    
    std::cout << "Jason salary : " << std::to_string(Jason->seeSalary()) << std::endl;
    std::cout << "Sanya salary : " << std::to_string(Sanya->seeSalary()) << std::endl;
    std::cout << "Rayan salary : " << std::to_string(Rayan->seeSalary()) << std::endl;
    std::cout << "Keanu salary : " << std::to_string(Keanu->seeSalary()) << std::endl;
    
    std::cout << "Chief, all equipment cost : " << std::to_string(chief->costOfEquipments()) << std::endl;
    std::cout << "Chief, all products cost : " << std::to_string(chief->costOfProducts()) << std::endl;
    
    
    
    return 0;
}


/* output:
Creating new profession:
Profession: Механик base rate 1200
Creating new profession:
Profession: Токарь base rate 1100
Creating new profession:
Profession: Драйвер base rate 1800
Creating new profession:
Profession: Джон Уик base rate 7000
Creating chief...
Chief: Black Jack phone:

Creating employee...
Employee: Jason Statham Profession: Механик age: 24 phone:  experiance: 3

Creating employee...
Employee: Rayan Gosling Profession: Драйвер age: 35 phone:  experiance: 6

Creating employee...
Employee: Keanu Reeves Profession: Джон Уик age: 54 phone:  experiance: 54

Creating employee...
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

Creating new equipment:
Equipment : Мустанг 1965 0 250000
Creating new equipment:
Equipment : Big gun 1 2000
Creating new equipment:
Equipment : Wild horse 2 600
Chief: Black Jack phone:

add employee ...
Employee: Jason Statham Profession: Механик age: 24 phone:  experiance: 3

Chief: Black Jack phone:

add employee ...
Employee: Rayan Gosling Profession: Драйвер age: 35 phone:  experiance: 6

Chief: Black Jack phone:

add employee ...
Employee: Keanu Reeves Profession: Джон Уик age: 54 phone:  experiance: 54

Chief: Black Jack phone:

add employee ...
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

Employee: Jason Statham Profession: Механик age: 24 phone:  experiance: 3

Employee: Rayan Gosling Profession: Драйвер age: 35 phone:  experiance: 6

Employee: Keanu Reeves Profession: Джон Уик age: 54 phone:  experiance: 54

Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

Employee: Jason Statham Profession: Механик age: 24 phone:  experiance: 3

picked equipment:
Equipment : Big gun 1 2000
Employee: Keanu Reeves Profession: Джон Уик age: 54 phone:  experiance: 54

picked equipment:
Equipment : Wild horse 2 600
Employee: Rayan Gosling Profession: Драйвер age: 35 phone:  experiance: 6

picked equipment:
Equipment : Мустанг 1965 0 250000
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

picked equipment:
Equipment : Мустанг 1965 0 250000
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

picked equipment:
Equipment : Wild horse 2 600
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

picked equipment:
Equipment : Big gun 1 2000
Equipment : Мустанг 1965 0 250000
Equipment : Wild horse 2 600
Equipment : Big gun 1 2000
Creating new product:
Product: t345902 table 1.2
Employee: Jason Statham Profession: Механик age: 24 phone:  experiance: 3

maked product:
Product: t345902 table 1.2
Creating new product:
Product: t345902 table 1.2
Employee: Jason Statham Profession: Механик age: 24 phone:  experiance: 3

maked product:
Product: t345902 table 1.2
Creating new product:
Product: t345902 table 1.2
Employee: Jason Statham Profession: Механик age: 24 phone:  experiance: 3

maked product:
Product: t345902 table 1.2
Creating new product:
Product: t345902 table 1.2
Employee: Jason Statham Profession: Механик age: 24 phone:  experiance: 3

maked product:
Product: t345902 table 1.2
Creating new product:
Product: t343890 stool 1
Employee: Jason Statham Profession: Механик age: 24 phone:  experiance: 3

maked product:
Product: t343890 stool 1
Creating new product:
Product: l007 laba 1.9
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

maked product:
Product: l007 laba 1.9
Creating new product:
Product: l007 laba 1.9
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

maked product:
Product: l007 laba 1.9
Creating new product:
Product: l007 laba 1.9
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

maked product:
Product: l007 laba 1.9
Creating new product:
Product: l007 laba 1.9
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

maked product:
Product: l007 laba 1.9
Creating new product:
Product: l007 laba 1.9
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

maked product:
Product: l007 laba 1.9
Creating new product:
Product: s80033 sofa 3.8
Employee: Саня Савчук Profession: Токарь age: 19 phone:  experiance: 0

maked product:
Product: s80033 sofa 3.8
Product: l007 laba 1.9
Product: l007 laba 1.9
Product: l007 laba 1.9
Product: l007 laba 1.9
Product: l007 laba 1.9
Product: s80033 sofa 3.8
Product: t345902 table 1.2
Product: t345902 table 1.2
Product: t345902 table 1.2
Product: t345902 table 1.2
Product: t343890 stool 1
Jason salary : 2950.000000
Sanya salary : 4425.000000
Rayan salary : 2400.000000
Keanu salary : 12400.000000
Chief, all equipment cost : 505200.000000
Chief, all products cost : 4775.000000
Program ended with exit code: 0
*/

