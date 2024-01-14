#include <iostream>

using namespace std;

void CorrectChange(int amount);
void CorrectDollars(int amount);
int main()
{
    double amount;
    int dollars;
    int change;

    cout << "Enter the amount: ";
    cin >> amount;

    dollars = (int)amount;
    change = (amount - dollars) * 100;

    CorrectDollars(dollars);
    CorrectChange(change);

    return 0;
}

void CorrectDollars(int amount)
{
    int tens;
    int fives;
    int ones;

    tens = amount / 10;
    amount = amount % 10;

    fives = amount / 5;
    amount = amount % 5;

    ones = amount;

    cout << "Number of tens    : " << tens << endl;
    cout << "Number of fives   : " << fives << endl;
    cout << "Number of ones    : " << ones << endl;
}

void CorrectChange(int amount)
{
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int otherAmount;

    quarters = amount / 25;
    otherAmount = amount % 25; //Somehow 86%25=10???
    //otherAmount = amount - (quarters * 25); is the same as the line above

    dimes = otherAmount / 10;
    otherAmount = otherAmount % 10;

    nickels = otherAmount / 5;
    otherAmount = otherAmount % 5;

    pennies = otherAmount;

    cout << "Number of quarters: " << quarters << endl;
    cout << "Number of dimes   : " << dimes << endl;
    cout << "Number of nickels : " << nickels << endl;
    cout << "Number of pennies : " << pennies << endl;

}
