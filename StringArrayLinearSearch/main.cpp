#include <iostream>

using namespace std;
void DisplayArray(int values[], int size);
void Swap(int&x, int&y);
void BubbleSort(int values[], int size);
bool LinearSearch(int values[], int size, int searchValue);
int LinearSearchInt(int values[], int size, int searchValue);
bool BinarySearch(int values[], int size, int searchValue, int& location);

int main()
{
    const int SIZE = 5;
    int data[SIZE] = {10,3,9,1,5};
    int searchValue;

    DisplayArray(data, SIZE);
    BubbleSort(data, SIZE);
    DisplayArray(data, SIZE);

    cout << "Enter value to search for : ";
    cin >> searchValue;

    bool result = LinearSearch(data, SIZE, searchValue);
    if (result == true)
        cout << "Value was found in array" << endl;
    else
        cout << "Value was not found in array" << endl;

    int result2 = LinearSearchInt(data ,SIZE, searchValue);
    if(result2 == true)
    {
        cout << "Value was found in array " << endl;
        cout << "Value was found at index " << result2 << endl;
        cout << "Value is " << data[result2] << endl;
    }
    else
    {
        cout << "Value was not found in array" << endl;
        cout << "Value was not found return index of " << result2 << endl;
    }

    bool binaryResult;
    int resultLocation;

    binaryResult = BinarySearch(data, SIZE, searchValue, resultLocation);

    if(binaryResult == true)
    {
        cout << "Value was found in array " << endl;
        cout << "Value was found at index " << resultLocation << endl;
        cout << "Value is " << data[resultLocation] << endl;
    }
    else
    {
        cout << "Value was not found in array" << endl;
        cout << "Value was not found return index of " << resultLocation << endl;
    }
    return 0;
}

bool BinarySearch(int values[], int size, int searchValue, int& location)
{
    bool result = false;
    int indexHigh = size;
    int indexLow = 0;
    int midPoint;

    location = -1;

    while(indexLow < indexHigh && result != true)
    {
        midPoint = (indexHigh + indexLow) / 2;
        cout << "Midpoint is " << midPoint << endl;

        if(values[midPoint] == searchValue)
        {
            result = true;
            location = midPoint;
        }
        else if(searchValue > values[midPoint]) //look to the right side of the array midpoint
        {
            indexLow = midPoint + 1;
        }
        else //look to the left of the array midpoint
        {
            indexHigh = midPoint - 1;
        }
    }

    return result;
}

bool LinearSearch(int values[], int size, int searchValue)
{
    bool result = false;
    int index = 0;

    while(index < size && result != true)
    {
        if(values[index] == searchValue)
            result = true;
        else
            index++;
    }
    cout << "Search index " << index << endl;

    return result;
}

int LinearSearchInt(int values[], int size, int searchValue)
{
    int result = -1;
    int index = 0;

    while(index < size && result == -1)
    {
        if(values[index] == searchValue)
            result = index;
        else
            index++;
    }
    //cout << "Search index " << index << endl;

    return result;
}

void BubbleSort(int values[], int size)
{
    bool swapped = true;

    for(int pass = 0; pass < size - 1; pass++)
    {
        swapped = false;
        for (int index = 0; index < size - pass - 1; index++)
        {
            if(values[index] > values[index+1])
            {
                Swap(values[index], values[index+1]);
                swapped = true;
            }

        }
        DisplayArray(values, size);
        cout << "Pass" << pass << endl;
    }
}

void Swap(int& x, int& y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

void DisplayArray(int values[], int size)
{
    for (int index=0; index < size; index++)
    {
        cout << values[index] << " ";
    }
cout << endl;
}
