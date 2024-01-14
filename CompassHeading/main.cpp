#include <iostream>

using namespace std;

/*
Declare Variables
    Declare compHead as int

Enter Compass Heading in Degrees
    Display "Enter compass heading in degrees:"

IF Calculate and Display Compass Heading
    If compHead >= 0 && compHead <= 360
        If compHead == 0 || compHead == 360
            Display "N" EOL
        Else if compHead == 90
            Display "E" EOL
        Else if compHead == 180
            Display "S" EOL
        Else if compHead == 270
            Display "W" EOL
        Else if compHead > 0 AND compHead < 90
            Display "N" compHead "E" EOL
        Else if compHead > 90 AND compHead < 180
            Display "S" 180-compHead "E" EOL
        Else if compHead > 180 AND compHead < 270
            Display "S" compHead-180 "W" EOL
        Else if compHead > 270 AND compHead < 360
            Display "N" 360-compHead "W" EOL
ELSE Display Error Message
    Else
        Display "Error: Invalid compass heading entered" EOL
*/

int main()
{
    int compHead;

    cout << "Enter compass heading in degrees: ";
    cin >> compHead;

    if (compHead >= 0 && compHead <= 360)
    {
        if (compHead == 0 || compHead == 360)
        {
            cout << "\n\t\tN\n";
        }
        else if (compHead == 90)
        {
            cout << "\n\t\tE\n";
        }
        else if (compHead == 180)
        {
            cout << "\n\t\tS\n";
        }
        else if (compHead == 270)
        {
            cout << "\n\t\tW\n";
        }
        else if (compHead > 0 && compHead < 90)
        {
            cout << "\n\t\tN" << compHead << "E\n";
        }
        else if (compHead > 90 && compHead < 180)
        {
            cout << "\n\t\tS" << 180 - compHead << "E\n";
        }
        else if (compHead > 180 && compHead < 270)
        {
            cout << "\n\t\tS" << compHead - 180 << "W\n";
        }
        else if (compHead > 270 && compHead < 360)
        {
            cout << "\n\t\tN" << 360 - compHead << "W\n";
        }
    }
    else
    {
        cout << "\n\t\tError: Invalid compass heading entered\n";
    }
    return 0;
}
