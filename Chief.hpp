//  Plant management
//
//  Chief.hpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#ifndef Chief_hpp
#define Chief_hpp

#include "Employee.hpp"

class Chief : public Person
{
public:
    Chief(std::string first_name,
          std::string last_name,
          int s, int a); // constructor
    std::string company;

    void addEmployee(Employee *employee);
    float costOfEquipments();
    float costOfProducts();
    void display();
    void displayEmployeesList();
private:
    std::vector<Employee*> employees;
};
#endif /* Chief_hpp */
