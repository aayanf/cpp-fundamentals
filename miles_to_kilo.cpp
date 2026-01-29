/******************************************************************************
    Aayan Faisal
    1/28/2026
    Convert miles to kilometers using a constant conversion factor
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double miles = 6;
    double kilo = miles * 1.609344;
    cout<< "Miles: " << miles<< endl;
    cout<< "Kilometers: " << kilo;
    
    return 0;    
}
