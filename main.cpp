//initial test main.cpp Ben Breshears, rewritten by Emily Huisinga, input by Trey Newbury

#include <iostream>
#include <string>
#include <array>
#include "DayOfYear.h"
using namespace std;


int main() {

    int dayOfYear;      //Variable to hold day inputed by user

    cout << "Please enter a day of the year (a number between 1 and 365): ";
    cin >> dayOfYear;

    //Validate inputted day
    while (dayOfYear < 1 || dayOfYear > 365)
    {
        cout << "ERROR: Please enter a number between 1 and 365: ";
        cin >> dayOfYear;
    }

    //Create DayOfYear variable to call constructor
    DayOfYear day = dayOfYear;

    //Call print to calculate and display month-day format
    day.print();

    return 0;
}

//Our group communicated mostly over email and exchanged links to our Github repositories
//Github worked well for us to exchange files
    //We each created our own repositories and just shared them with each other
//Thomas Vazquez did not respond to any of our emails and did not contribute anything

/*
TEST DATA
----------
Please enter a day of the year (a number between 1 and 365): 30
30 day(s) of the year is: January 30

Please enter a day of the year (a number between 1 and 365): 859
ERROR: Please enter a number between 1 and 365: 284
284 day(s) of the year is: October 11

Please enter a day of the year (a number between 1 and 365): 163
163 day(s) of the year is: June 12

Please enter a day of the year (a number between 1 and 365): 87
87 day(s) of the year is: March 28
*/

