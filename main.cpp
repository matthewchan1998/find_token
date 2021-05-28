//  main.cpp
//
//  Created by Matthew Chan on 8/11/2018.
//  Copyright © 2018 Matthew Chan. All rights reserved.

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "getToken.hpp"
#include "display_grid.hpp"

using namespace std;

int main()
{
    int i,j;
    grid m;         //Calling the display_grid classes
    token t;        //Calling the getToken classes
    m.display();    //Display grid
    for(i=0;i<=29;i++)
    {
        for(j=0;j<=58;j++)
        {
            t.data_t[i][j] = m.data[i][j];      //Copy the grid to scan the token
        }
    }
    t.tok();        //Display token
}
