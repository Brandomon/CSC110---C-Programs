#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number ";
    cin >> number;

    if(number > 10)
    {
        int number;     //This int number is different than the one on line 7
                        //due to the scope that it is within, only good within
        cout << "Enter a number ";                            //curly brackets
        cin >> number;
        cout << "Inner number is " << number << endl;
    }

    cout << "Outer number is " << number << endl;

    return 0;
}
