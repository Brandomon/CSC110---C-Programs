#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function prototype
void CalcDistance();
/*
Document the program but
*/
int main()
{
    int a = 1;
    int b = 6;
    int x;

    CalcDistance();

    cout << time(0) << endl;

    srand(time(0));
    for (int i=0; i < 10; i++)
    {
        x=(rand() % abs(b-a+1)) + a;
        cout << x << endl;

    }

return 0;
}

/*
Documentation of the function
The pseudo code for the function
*/

void CalcDistance()
{
    double distance;
    int x1, y1;
    int x2, y2;
    double p1;

    cout << "Enter the X and Y for the first point";
    cin >> x1 >> y1;

    cout << "Enter the X and Y for the second point";
    cin >> x2 >> y2;

    p1 = pow((x2-x1),2);
    distance = sqrt(p1 + pow((y2 - y1),2));

    cout << fixed << showpoint << setprecision(2);
    cout << "The distance is " << distance << endl;
}


