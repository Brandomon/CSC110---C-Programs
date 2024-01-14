#include <iostream>
#include <iomanip>
using namespace std;

//Global Variables **Only Constants**
const int ROWS = 3;
const int COLS = 4;

int main()
{
    int myData[ROWS][COLS];

    for(int row=0; row < ROWS; row++)
    {
        for(int col=0; col < COLS; col++)
        {
            cout << setw(10) << myData[row][col];
        }
        cout << endl;
    }
/************************************************************************/
//
/************************************************************************/

    for(int row=0; row < ROWS; row++)
    {
        for(int col=0; col < COLS; col++)
        {
            cout << "Enter a value for row " << row << " column " << col;
            cin >> myData[row][col];
        }
        cout << endl;
    }
/************************************************************************/
//
/************************************************************************/

    for(int row=0; row < ROWS; row++)
    {
        for(int col=0; col < COLS; col++)
        {
            cout << setw(10) << myData[row][col];
        }
        cout << endl;
    }
/************************************************************************/
//                          Find Totals
/************************************************************************/

    int total = 0;
    int finalTotal = 0;
    for(int row=0; row < ROWS; row++)
    {
        for(int col=0; col < COLS; col++)
        {
            total += myData[row][col];
            finalTotal += myData[row][col];
        }
        cout << "Student's Total: " << total << endl;
        total=0;
    }
    cout << "Total of the array is: " << finalTotal << endl;
/************************************************************************
                    To Find Totals of Columns / Find Columns First
    int total = 0;
    int finalTotal = 0;
    for(int col=0; col < COLS; col++)
    {
        for(int row=0; row < ROWS; row++)
        {
            total += myData[col][row];
            finalTotal += myData[col][row];
        }
        cout << "Student's Total: " << total << endl;
        total=0;
    }
*************************************************************************/
    return 0;
}
