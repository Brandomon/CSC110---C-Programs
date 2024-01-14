#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

void DisplayArray(const int myArray[ ][COLS], int size);
void GetData(int myArray[ ][COLS], int size);
const string divs[4] ={"North", "South", "East", "West"} ;
const string quarters[5] = {"", "Q1", "Q2", "Q3", "Q4"};

int main()
{

    int myData[ROWS][COLS];

    //DisplayArray(myData, ROWS);

    GetData(myData, ROWS);

    DisplayArray(myData, ROWS);

    int total = 0;
    int row, col;

    for( row=0; row < ROWS-1; row++)
    {
        for( col=0; col < COLS-1; col++)
        {
             total += myData[row][col];
        }

    }
    myData[ROWS-1][COLS - 1] = total;

    cout << "Total of the array is " << total << endl;

    total = 0;

    for( row=0; row < ROWS-1; row++)
    {
        for( col=0; col < COLS-1; col++)
        {
             total += myData[row][col];
        }
        cout << "Total of the row "  << row << " is " << total << endl;
        myData[row][COLS - 1] = total;
        total = 0;
    }

    total = 0;
    for( col=0; col < COLS-1; col++)
    {
        for( row=0; row < ROWS-1; row++)
        {
             total += myData[row][col];
        }
        cout << "Total of the column "  << col << " is " << total << endl;
        myData[ROWS-1][col] = total;
        total = 0;
    }

    DisplayArray(myData, ROWS);
    return 0;
}

void GetData(int myArray[ ][COLS], int size)
{
    for(int row=0; row < ROWS-1; row++)
    {
        for(int col=0; col < COLS-1; col++)
        {
            cout << "Enter a value for row " << row << " column " << col << " ";
            cin >> myArray[row][col];
        }
    }

}
void DisplayArray(const int myArray[ ][COLS], int size)
{
    cout << setw(10) << quarters[0] << setw(10) << quarters[1]<< setw(10) <<
            quarters[2]<< setw(10) << quarters[3]  << setw(10) << quarters[4] << endl;
    for(int row=0; row < ROWS; row++)
    {
        cout << setw(10) << divs[row];
        for(int col=0; col < COLS; col++)
        {
            cout << setw(10) << myArray[row][col];
        }
        cout << endl;
    }
}
