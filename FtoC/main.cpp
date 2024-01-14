#include <iostream>
#include <iomanip>
using namespace std;

/*
 Declare Variables
    Declare farh as a double
    Declare cel as a double

 Get farh
    Display "Enter the Farh: "
    Input farh

 Calculate cel
    Cel = (5/9) (farh-32)

 Display the c
    Display "The Cel is ", cel, EOL
*/

int main()
{
    double farh = 0;
    double cel = 0;
    int x = 5;

    cout << "Enter the Farh: ";
    cin >> farh;

    cel = ( double(x) / 9) * (farh - 32);

    cout << fixed << showpoint << setprecision(1);
    cout << "The cel is " << cel << endl;

    return 0;
}
