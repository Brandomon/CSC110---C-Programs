#include <iostream>

using namespace std;

/*
Declare Constants
    Declare MOD_TWO equal to 2
Declare Variables
    Declare number as integer

Input an odd number (1-25)
    IF (number is between 1 and 25)
        IF (number is odd)
            Output a diamond containing input number amount of rows
                FOR(Row = 0; row < number / 2 + 2; row++)
                    FOR (space = number / 2 + 1; space <= number - row; space++)
                        Display " "
                    END FOR
                    FOR (col = 1; col <= row * 2 - 1; col++)
                        Display "*"
                    END FOR
                    ENDLINE
                END FOR
        END IF
        ELSE
            Output Error Message "Input number must be odd"
        END ELSE
        ELSE
            Output Error Message "Input number must be between 1 and 25"
        END ELSE

*/
int main()
{
const int QUIT = -1;
const int MIN_VAL = 1;
const int MAX_VAL = 25;
const int MOD_TWO = 2;
int number;
int rem;
int row;
int space;
int col;

    cout << "Enter an odd number between 1 and 25(-1 to quit): ";
    cin >> number;

    while (number != QUIT)
    {
    rem = number % MOD_TWO;
    if (number >= MIN_VAL && number <= MAX_VAL)
    {
        if (rem == 1)
        {
            for(row = 0; row < number / 2 + 2; row++)
            {
                for(space = number / 2 + 1; space <= number - row; space++)
                {
                    cout << " ";
                }
                for(col = 1; col <= row * 2 - 1; col++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            for (row = number / 2 + 1; row > 1; row--)
            {
                for(space = number / 2 + 2; space > row; space--)
                {
                    cout << " ";
                }
                for(col = 1; col <= row *2 -3; col++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Error: Input number must be odd" << endl;
        }
    }
    else
    {
        cout << "Error: Input number must be between 1 and 25(inclusive)" << endl;
    }
    cout << "Enter an odd number between 1 and 25(-1 to quit): ";
    cin >> number;
    }
    return 0;
}
