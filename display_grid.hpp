//  display_grid.hpp
//
//  Created by Matthew Chan on 10/11/2018.
//  Copyright © 2018 Matthew Chan. All rights reserved.

#ifndef display_grid_hpp
#define display_grid_hpp
#include <string>
#include <iostream>

using namespace std;

class grid
{
private:

public:
    string filename;
    char data[40][60];      //Create 2d matrix to hold data from file
    void display();
};;


#endif /* display_grid_hpp */
