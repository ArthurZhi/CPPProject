//  Plant management
//
//  Employee.cpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#include "Employee.hpp"


Employee :: Employee(std::string first_name,
                     std::string last_name,
                     int s, int a,
                     std::string compny,
                     Profession *prof,
                     int exp):Person(first_name, last_name, s, a)
{
    company = compny;
    experience = exp;
    profession = prof;
    std::cout << "Creating employee... " << std::endl;
    display();

}

void Employee :: display()
{
    std::cout << "Employee: " << firstName << " "<< lastName
    << " Profession: " << profession->name
    << " age: " << std::to_string(age)
    << " experience: " << experience
    << std::endl;

}

float Employee :: productsCost()
{
    float cost = 0.0;
    for(Product prod : products) cost+= prod.costCoef * PRODUCT_PAY; // Cost of All Products
    return cost;
}

float Employee :: equipmentsCost()
{
    float cost = 0.0;
    for(Equipment *equip : equipments) cost+= equip->cost;
    return cost;
}

float Employee :: seeSalary()
{
    return profession->baseRate + experience * EXPERIANCE_PAY + productsCost();
}


void  Employee :: makeProduct(std::string vendor, std::string name, float costCoef)
{
    Product product(vendor, name, costCoef);
    products.push_back(product); //Add product to products
    display();
    std::cout << "maked product: " << std::endl;
    product.display();
}

void Employee :: pickEquipment(Equipment *equipment)
{
    equipments.push_back(equipment);
    display();
    std::cout << "picked equipment: " << std::endl;
    equipment->display();
}

void Employee :: displayProductsList()
{
    for(Product prod : products) prod.display();
}

void Employee :: displayEquipmentsList()
{
    for(Equipment *equip : equipments) equip->display();
}
