#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    int headCount = 0;
    int tailCount = 0;
    int coinFlip;
    int b = 2;
    int a = 1;
    char again;

    srand(time(0));

    do
    {
    headCount = 0;
    tailCount = 0;

    for (int count=0; count < 100; count++)
    {
    coinFlip=(rand() % abs(b-a+1)) + a;
    if (coinFlip == 1)
    {
        headCount++;
    }
    else
    {
        tailCount++;
    }
    }

    cout << "Total number of heads " << setw(10) << headCount << endl;
    cout << "Total number of tails " << setw(10) << tailCount << endl;

    cout << "Do you wish to continue> (Y/N) ";
    cin >> again;
    while(toupper(again) != 'Y' && toupper(again) != 'N')
    {
        cout << "Please enter a Y or N" << endl;
        cout << "Do you wish to continue? (Y/N) ";
        cin >> again;
    }

  }while(again =='Y' || again == 'y');

   return 0;
}
