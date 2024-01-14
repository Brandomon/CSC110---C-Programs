#include <iostream>

using namespace std;

void RealParts(double value);

/*
*
*
*
*
*/

int main()
{
    double value;       //double data;      Example of how variable name can be different

    cout << "Enter a decimal value ";
    cin >> value;

    RealParts(value);   //RealParts(data);  Example of how variable name can be different

    cout << "Enter a decimal value ";       //Will ask for second value to seperate
    cin >> value;

    RealParts(value);

    return 0;
}

/*
*
*
* Pseudo Code
*
*
*/

void RealParts(double value) //double value is a different variable than above
{
    int whole;
    double decimal;

    whole = (int)value;
    decimal = value - whole;

    cout << "The whole value is " << whole << endl;
    cout << "The decimal value is " << decimal << endl;
}
