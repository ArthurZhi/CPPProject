//  Plant management
//
//  Employee.hpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#ifndef Employee_hpp
#define Employee_hpp


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
