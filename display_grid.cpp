//  display_grid.cpp
//
//  Created by Matthew Chan on 10/11/2018.
//  Copyright © 2018 Matthew Chan. All rights reserved.

#include "display_grid.hpp"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void grid::display()
{
    int i, j;
    ifstream inputFile;     //Read file
    cout << "Please enter file name: " << endl;
    do{
        getline(cin, filename);     //Scan for file name
        inputFile.open(filename.c_str());       //Search for file
        if(!inputFile) {        //If file cannot be found
            cout << "Error! Incorrect file. Please renter:" << endl;
        } else {
            break;      //If file found exit do-while
        }
    } while(1);
    
    //inputFile.open("/Users/Matthew/Desktop/ACS232 Assignment/ACS232 Assignment/myFile.txt");
    
    cout << "Opening file..." << endl;
    for(i=0;i<=29;i++)
    {
        for(j=0;j<=58;j++)
        {
            inputFile >> data[i][j];        //Get data from file
            cout << data[i][j];             //Display 30x30
        }
        cout << "\n" << endl;
    }
    cout << "File opened, closing..." << endl;
    
    inputFile.close();      //Close file
    
    return;
}

