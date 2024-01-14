#include <iostream>

using namespace std;

/*******************************************************************
* Declare Constants
*   MAX_COUNT = 10
* Declare Variables
*   Declare again as char
*   Declare input1 as integer
*   Declare input2 as integer
*   Declare largest as integer
*   Declare smallest as integer
*   Declare counter as integer
*   Initialize int divCounter = 0
*   Initialize int totalLargest = 0
*   Initialize int totalSmallest = 0
*   Initialize double avgLargest = 0
*   Initialize double avgSmallest = 0
* DO
*       Ask user to input set of ten numbers
*       input1 equals largest and input1 equals smallest
*       FOR (count = 0, count < MAX_COUNT, count++)
*       Ask user for input2
*           IF (input2 is larger than largest)
*               input2 equals largest
*           ELSE IF (input 2 is smaller than smallest)
*               input2 equals smallest
*       Output the smallest and largest of the set
*       Calculate totalLargest
*       Calculate totalSmallest
*       Add 1 to divCounter
*       Ask if user wants to continue (y for yes, n for no)
*       Input again
*       WHILE (again is not equal to y and again is not equal to n)
*           Output error message
*           Input again
* END DO - WHILE (again is equal to y or Y)
* avgLargest equals totalLargest / divCounter
* avgSmallest equals totalSmallest / divCounter
* Output Average Largest
* Output Average Smallest
*******************************************************************/
int main()
{
    //Declare Constants
    const int MAX_COUNT = 10; //Limit to numbers within a set

    //Declare Variables
    int input1;               //User input for the first number of the set
    int input2;               //User input for the rest of the numbers
    int largest;              //Largest number of the input set
    int smallest;             //Smallest number of the input set
    int counter;              //Counter used to limit set to 10 numbers
    char again;               //Choice of user to continue or end the program
    int divCounter = 0;       //Counter for divisor for finding average
    int totalLargest = 0;     //Total of largest numbers of input sets
    int totalSmallest = 0;    //Total of smallest numbers of input sets
    double avgLargest = 0;    //Average of the largest numbers of input sets
    double avgSmallest = 0;   //Average of the smallest numbers of input sets

    do
    {
        cout << "Enter a set of 10 integers:\n";
        cin >> input1;
        largest = input1;
        smallest = input1;

        for (counter = 1; counter < MAX_COUNT; counter++)
        {
            cin >> input2;
            if (input2 > largest)
            {
               largest = input2;
            }
            else if (input2 < smallest)
            {
                smallest = input2;
            }
        }
        cout << "\nLargest: " << largest;
        cout << "\nSmallest: " << smallest;

        totalLargest += largest;
        totalSmallest += smallest;
        divCounter++;

        cout << "\n\nDo you wish to continue? (Y/N) ";
        cin >> again;
        while(toupper(again) != 'Y' && toupper(again) != 'N')
        {
            cout << "Please enter a Y or N" << endl;
            cout << "Do you wish to continue? (Y/N) ";
            cin >> again;
        }
    }while(again =='Y' || again == 'y');

    avgLargest = double(totalLargest) / divCounter;
    avgSmallest = double(totalSmallest) / divCounter;

    cout << "\nAverage Largest: " << avgLargest;
    cout << "\nAverage Smallest: " << avgSmallest;
    cout << "\n\n";

    return 0;
}
