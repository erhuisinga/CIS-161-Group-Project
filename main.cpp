//initial test main.cpp Ben Breshears, rewritten by Emily Huisinga, input by Trey Newbury

#include <iostream>
#include <string>
#include <array>
#include "DayOfYear.h"
using namespace std;



int main() {

    int test1;
    cout << "Please enter a day of the year (a number between 1 and 365): ";
    cin >> test1;
    while (test1 < 1 || test1 > 365)
    {
        cout << "ERROR: Please enter a number between 1 and 365: ";
        cin >> test1;
    }
    DayOfYear test = test1;

    test.print();

    return 0;
}
