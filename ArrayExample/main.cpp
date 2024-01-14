#include <iostream>

using namespace std;

int main()
{
    //int data[10]={0}; // all value in array equals 0
    const int SIZE = 5;
    int data[10]={0,3}; //index 0 = 0, index 1 = 3
    int x = 4;

    data[x] = 88;

    cout << data[4] << endl;

    data[2] = data[4]*2;
    cout << data[2] << endl;

    cout << data[0] << endl;
    cout << data[1] << endl;
    //cout << data[9] << endl; //out of bounds of constant SIZE - assigns random num

    cout << "data in the array" << endl;

    for (int index = 0; index < SIZE; index++)//This part will allow user to input and store multiple values
    {
        cout << "Enter value " ;
        cin >> data[index];
    }

    for (int index = 0; index < SIZE; index++)
    {
        cout << data[index] << endl;
    }

    return 0;
}
