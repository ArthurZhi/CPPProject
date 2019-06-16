//  Plant management
//
//  Product.cpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#include "Product.hpp"

Product :: Product(std::string v, std::string n, float coef)
{
    vendor = v;
    name = n;
    costCoef = coef;
    std::cout << "Creating new product:" << std::endl;
    display();
}

void Product :: display()
{
    std::cout << "Product: " << vendor << " "<< name << " " << costCoef << std::endl;
}
