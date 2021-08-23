/*
Name of Program : findPi.cpp
Purpose : Find PI to the Nth Digit 
Description : Enter a number and have the program generate PI up to that many decimal places. Keep a limit to how far the program will go.
Author : Krystal Clarke
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double pi_val = MY_PI;
    int decimal_places = 0;
    cout << "Please enter a number of decimal places with the max decimal place being 50." << endl;
    cin >> decimal_places;

    cout << "The generated PI value is " <<setprecision(decimal_places)<< MY_PI << endl;
    
   return 0;
}
