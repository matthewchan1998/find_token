//  getToken.cpp
//
//  Created by Matthew Chan on 11/11/2018.
//  Copyright © 2018 Matthew Chan. All rights reserved.

#include "getToken.hpp"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int clean_input(void) {     //Clear the invalid input
    while (getchar()!='\n');
    return 1;
}

void token::tok()
{
    char t,hold_t,hold_f;
    int i,j;
    int n=0;
    
    cout << "\nPlease enter token:" << endl;    //Gets input from user

    do{
        hold_f = scanf("%c%c", &t, &hold_t);   //Scans input from user
        while (hold_f !=2 || hold_t!='\n') {   //While scanf did not read 2 objects
            clean_input();
            cout << "\nYou have typed more than one characters.\n"
                   "Please enter token:" << endl;    //Ask user to type a valid value
            hold_f = scanf("%c%c", &t, &hold_t);
        }
        if(t==',') {    //If comma is scanned
           cout << "\nToken cannot be comma.\n"
                   "Please enter token:" << endl;
        } else {     //If user typed in correctly, exit do-while.
            break;
        }
    }while(1);
    
    //Find the token
    for(i=1;i<=29;i++)
    {
        for(j=2;j<=57;j++)
        {
            if(data_t[i][j]==t && data_t[i-1][j]=='0' && data_t[i+1][j]=='0' && data_t[i][j+2]=='0' && data_t[i][j-2]=='0')
            {
                n++;
                if(n<=10) {         //Display results
                    cout << "Token location: ("<<i<<","<<j<<")" << endl;
                    } else {        //If there are more than 10 tokens
                        cout << "There are " << n << " tokens (max 10 occurance) for " << t << endl;
                        exit( EXIT_FAILURE );
                }
            }
        }
    }
    //Display number of tokens
    if (n==0)
    {
        cout << "There are no tokens for " << t << endl;
    } else {
        cout << "There are " << n << " token(s) for " << t << endl;
    }
    return;
}
