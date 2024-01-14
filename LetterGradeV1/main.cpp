#include <iostream>

using namespace std;

/*
Declare variables
Get grade

Determine if valid grade
    Determine letter grade
        Display the letter grade

Display Invalid message

****************************************

Declare grade as Integer

Display "Enter your test score: "
Input grade

If grade >= 0 AND grade <= 100
    If grade >= 90
        Display "Your grade is an A", EOL
    Else
        If grade >= 80 AND grade <= 89
            Display "Your grade is a B", EOL
        Else
            If grade >= 70 AND grade <= 79
                Display "Your grade is a C", EOL
            Else
                If grade >= 60 AND grade <= 69
                    Display "Your grade is a D", EOL
                Else
                    Display "Your grade is a F", EOL
                End IF
            End IF
        End IF
    End IF
Else
    Display "invalid grade entered",EOL

End IF

*/
int main()
{
    int grade;

    cout << "Enter your test score: ";
    cin >> grade;

    if (grade >= 0 && grade <= 100)
    {
        if (grade >= 90)
        {
            cout << "Your grade is an A" << endl;
        }
            if (grade >= 80 && grade <= 89)
            {
                cout << "Your grade is a B" << endl;
            }
                if (grade >= 70 && grade <=79)
                {
                    cout << "Your grade is a C" << endl;
                }
                    if (grade >= 60 && grade <=69)
                    {
                        cout << "Your grade is a D" << endl;
                    }
                        else
                        {
                            cout << "Your grade is an F" << endl;
                        }
    }
    else
    {
        cout << "Invalid grade entered" << endl;
    }

    return 0;
}
