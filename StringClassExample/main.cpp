#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    string fullName;

    cout << "Enter your name ";
    getline(cin, firstName,' ');    //Uses spaces to mark end of getline
    getline(cin, lastName,' ');     //Can switch to * or whatever char
    cout << firstName << endl;
    cout << lastName << endl;

    fullName = lastName + ", " + firstName;
    cout << fullName << endl;

    int length;
    length = firstName.length();
    cout << "Length of the string is : " << length << endl;
    int size;
    size = fullName.size();
    cout << "Size of the string is : " << size << endl;

    for(int index = 0; index < firstName.length(); index++)
    {
        cout << firstName[index] << endl;
      //cout << firstName.at(index) << endl; //Same as above. Interchangeable.
    }

    cout << firstName.substr(0, 4) << endl;

    cout << firstName.rfind("don", firstName.length()-1) << endl;

    firstName.insert(3, lastName);
    cout << firstName << endl;

    firstName.replace(0,3,"DogAndCat");
    cout << firstName << endl;

    firstName.erase(1,3);
    cout << firstName << endl;

    lastName.resize(10,'y');
    cout << lastName << endl;

    return 0;
}
