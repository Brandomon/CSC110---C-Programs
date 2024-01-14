#include <iostream>

using namespace std;
void DisplayArray(int values[], int size);
void Swap(int&x, int&y);
void BubbleSort(int values[], int size);

int main()
{
    const int SIZE = 5;
    int data[SIZE] = {10,3,9,1,5};
    //int w = 10;
    //int z = 3;

    //swap(w,z);
    //Swap(data[0], data[1]);

    //cout << w << " " << z << endl;

    DisplayArray(data, SIZE);
    BubbleSort(data, SIZE);
    DisplayArray(data, SIZE);

    return 0;
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
