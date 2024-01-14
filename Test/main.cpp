#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Function prototype
void CalculateCost(float rate, int count, float& subTotal, float& taxCost);

int main()
{
    const float TAX_RATE = 0.08;
    float tax = 0.0;
    float sub = 0.0;
    int quantity = 10;

    CalculateCost(TAX_RATE, quantity, sub, tax);

    cout << fixed << showpoint << setprecision(2);
    cout << "The cost for " << quantity << " items is $" << sub
         << ", and the tax for $" << sub << " is $" << tax << endl;
    cout << pow(5,2);

    return 0;
}

//Function definition
void CalculateCost(float rate, int count, float& subTotal, float& taxCost)
{
    if (count < 10)
        subTotal = count * 0.50;
    else
        subTotal = count * 0.25;

    taxCost = subTotal * rate;
}


