//  Plant management
//
//  Product.hpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#ifndef Product_hpp
#define Product_hpp

#include <iostream>

struct Product {
public:
    Product(std::string v, std::string n, float coef);
    std::string vendor; // Product id
    std::string name;
    float costCoef = 1.0;
    void display();
};
#endif /* Product_hpp */
