#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double width, height, perimeter, area;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "Enter the height of the rectangle: ";
    cin >> height;

    perimeter = 2 * height + 2 * width;
    area = height * width;

    cout << fixed << showpoint << setprecision(2);

    cout << "The area of the rectangle is: " << area << " units squared." << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << " units." << endl;

    return 0;
}
