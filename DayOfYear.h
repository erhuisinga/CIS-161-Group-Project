//initial header by David Meyer, edited by Ben Breshears

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <iostream>
#include <string>
using namespace std;

class DayOfYear {

    private:
        int day;
        std::string month;

    public:
            DayOfYear(int d);
            void print();
};

#endif // DAYOFYEAR_H
