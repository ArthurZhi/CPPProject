//  Plant management
//
//  main.cpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#include "Chief.hpp"
#include "Person.hpp"
#include "Employee.hpp"


int main() {

    std::string company = "Apple inc";

    Profession *mechanic = new Profession("Junior", 1200.0);
    Profession *tokar = new Profession("Middle", 1100.0);
    Profession *driver = new Profession("Driver", 1800.0);
    Profession *johnwick = new Profession("Tim Cook", 7000.0);

    Chief *chief = new Chief("Black", "Jack", 1, 79);

    Employee *Jason = new Employee("Jason", "Statham", 1, 24, company, mechanic, 3);
    Employee *Rayan = new Employee("Rayan", "Gosling", 1, 35, company, driver, 6);
    Employee *Keanu = new Employee("Keanu", "Reeves", 1, 54, company, johnwick, 54);
    Employee *Sanya = new Employee("Alexandr", "Zadrrr", 1, 19, company, tokar, 0);

    Equipment *mustang = new Equipment("MacBook 1965", perfect, 250000.0);
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
