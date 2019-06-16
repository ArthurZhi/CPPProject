//  Plant management
//
//  Equipment.cpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#include "Equipment.hpp"

Equipment :: Equipment(std::string n, EquipCondition cond, float cst)
{
    name = n;
    condition = cond;
    cost = cst;
    std::cout << "Creating new equipment:" << std::endl;
    display();
}
void Equipment :: display()
{
    std::cout << "Equipment : "<< name << " "<< condition << " " << cost << std::endl;
}
