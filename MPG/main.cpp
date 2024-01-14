#include <iostream>
#include <string>

using namespace std;

/*
Program Name: Calculate MPG

Description: Prompts the user for number of gallons and the number of miles. Calculates the MPG for the vehicle. Displays the MPG for the vehicle.

Pseudo Code
    Get the gallons
    Get the miles
    Calculate the mpg
    Display the mpg

    Declare gallons as integer
    Declare miles as double
    Declare mpg as double

    Get the gallons
        Display "Please enter the number of gallons "
        Input gallons

    Get the miles
        Display "Please enter the amount of miles "
        Input miles

    Calculate the mpg
        mpg = miles / gallons

    Display the mpg
        Display "The MPG for your vehicle is ", mpg, EOL
*/
int main()
{
    int gallons = 0;
    double miles = 0;
    double mpg = 0;

    cout << "Please enter the number of gallons ";
    cin >> gallons;

    cout << "Please enter the amount of miles ";
    cin >> miles;

    mpg = miles/gallons;

    cout << "The MPG for your vehicle is " << mpg << endl;

        return 0;
}
