#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int grade = 0;
    int total = 0;
    int div = 0;
    double avg = 0;

    cout << "\nEnter Grade: ";
    cin >> grade;

    while (grade != -1)
    {
        if (grade <= 100 && grade >= 0)
        {
            total += grade;
            div ++;
            cout << "\nEnter Next Grade: ";
            cin >> grade;
        }
        else
        {
            cout << "\nError. Invalid Grade Entered";
            cout << "\nEnter Grade: ";
            cin >> grade;
        }
    }
    if (total > 0)
    {
        avg = (double)total / div;
        cout << fixed << showpoint << setprecision(1);
        cout << "\nYour Average is: " << avg << ".";
    }
    else
    {
        cout << "\nError. No Data Entered.";
    }
   return 0;
}
