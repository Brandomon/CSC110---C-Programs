#include <iostream>
#include <iomanip>
using namespace std;

const int ARRAY_SIZE = 10;   //Can change to 100 and works with 100 values, 12 values works with 12, etc...

void GetInputs(double values[], int size);     //Nothing after values in the brackets to avoid limitation of numbers
void DisplayArray(const double myArray[], int size, double average); //Function prototype
double CalcAverage(const double data[], int size);
void DisplayArray(const double myArray[], int size);                 //Function prototype ; Const array coming in to avoid any changes of data
double CalcTotal(const double  data[], int size);

int main()
{
    double data[ARRAY_SIZE] = {0.0};
    //double data2[ARRAY_SIZE * 2];         //Second data set with 2x the numbers
    double theAverage = 0;                 //Variables names theAverage, average, avg don't matter?

    //DisplayArray(data, ARRAY_SIZE);
    GetInputs(data, ARRAY_SIZE);
    //theAverage = CalcAverage(data, ARRAY_SIZE);
    //DisplayArray(data, ARRAY_SIZE, theAverage);
    DisplayArray(data, ARRAY_SIZE);
    //DisplayArray(data2, ARRAY_SIZE*2)

    return 0;
}

void GetInputs(double values[], int size)                            //int size does not effect ARRAY_SIZE (Array default going by reference, size is by value)
{
    for(int index=0; index < size; index++)
    {
        cout << "Enter a value: ";
        cin >> values[index];
    }
}

void DisplayArray(const double myArray[], int size)
{
    double average = 0;

    average = CalcAverage(myArray, size);       //Calls function within the function

    cout << fixed << showpoint << setprecision(3);

    for(int index=0; index < size; index++)
    {
        cout << setw(10) << myArray[index] << setw(10) << (myArray[index] - average) << endl;
    }
        cout << "The average is: " << average << endl;
}

void DisplayArray (const double myArray [], int size, double average)//Function header
{
    cout << fixed << showpoint << setprecision(3);

    for(int index=0; index < size; index++)
    {
        cout << setw(10) << myArray[index] << setw(10) << (myArray[index] - average) << endl;
    }
    //myArray[4] = 9999;                                             //Modifies the data by reference; if myArray is const double, will result in an error
    cout << "The average is: " << average << endl;
}

double CalcTotal(const double data[], int size)
{
    double total = 0;

        for(int index = 0; index < size; index++)
    {
        total += data[index];
    }
    return total;
}

double CalcAverage(const double data[], int size)
{
    double total = 0;
    double avg = 0;

    total = CalcTotal(data, size);

/*  for(int index = 0; index < size; index++)
    {
        total += data[index];
    }
*/
    avg = total/size;

    return avg;
}
