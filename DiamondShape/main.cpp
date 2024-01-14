#include <iostream>

using namespace std;

int main()
{
int value = 0;
cout << "Please enter in a value: ";
cin >> value;
cout << endl;


for (int i = 0; i < value; i++) {
    //print spaces v v v
    for (int x = 0; x < (value - i - 1); x++) {
        cout << " ";
    }
    //print * v v v
    for (int y = 0; y < (2 * i + 1); y++) {
        cout << "*";
    }
    cout << endl;
}
return 0;
}
