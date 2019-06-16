//  Plant management
//
//  Profession.cpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#include "Profession.hpp"

Profession :: Profession(std::string n, float rate)
{
    name = n;
    baseRate = rate;
    std::cout << "Creating new profession:" << std::endl;
    display();
}

void Profession:: display()
{
    std::cout << "Profession: " << name << " base rate "<< baseRate << std::endl;
}
