#include <iostream>

using namespace std;

double CommonFraction(int num, int dom);

/*
*
*
*
* Set result = Call CommonFraction value1 value2
*
*
*
*/

int main()
{
    int value1;
    int value2;
    double result;

    cout << "Enter the first value ";
    cin >> value1;

    cout << "Enter the second value ";
    cin >> value2;

    if (value2 > 0)
    {
        result = CommonFraction(value1, value2);
        cout << "The fraction is " << result << endl;
    }
    else
    {
        cout << "Cannot divide by zero" << endl;
    }

    return 0;
}

/*
..
..
..
..
..Pseudo Code
..
..
..
*/

double CommonFraction(int num, int dom)
{
    double temp;

    temp = (double)num/dom;

    return temp;
}
