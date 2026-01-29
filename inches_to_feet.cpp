/******************************************************************************
    Aayan Faisal
    1/28/2026
    Convert Inches to Feet
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int inches = 26, feet, remainingInches; // define variables
    
    feet = inches / 12; // feet to inches conversion
    remainingInches = inches % 12; // in case any inches leftover
    
    cout << "Starting inches: "<<inches << endl;
    cout << "Feet: "<<feet<<endl;
    cout << "Remaining inches: "<<remainingInches<<endl;
    return 0;    
}