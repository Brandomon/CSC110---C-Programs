#include <iostream>
#include <iomanip>

using namespace std;

void InputHeight(int& feet, float& inches);
float CalculateMeters(int& heightFeet, float& heightInches);
void Output(float meters);
char ContinueLoop();

/********************************************************************************
* Program Name: HeightToMeters
* Author      : Brandon LaPointe
* Description : This program will read in a height in feet and inches
*    (and will output the equivalent height in meters (as a float) using
*    three functions: one for input, one for calculating, and one more
*    for output. The program will include a loop that lets the user repeat
*    this computation for new input values, such that when each computation
*    is finished, the program will ask the user whether he/she wants to
*    compute again.
*
* PseudoCode:
* BEGIN HeightToMeters
* DO
*    InputHeight Function
*    CalculateMeters Function
*    Output Function
*    ContinueLoop Function
* WHILE again is equal to y or Y
********************************************************************************/
int main()
{
    //Declare Variables
    char again;
    int feet;
    float inches;
    float meters;

    do
    {
        InputHeight(feet, inches);
        CalculateMeters(feet, inches);
        Output(meters);
        ContinueLoop();
    }while(again == 'Y' || again == 'y');

    return 0;
}

/*******************************************************************
* Function Name: InputHeight
* Author       : Brandon LaPointe
* Description  : Asks the user to input a height in feet and inches
*
* PseudoCode   :
*   Declare Variables
*   Input feet
*   Input inches
*
*******************************************************************/
void InputHeight(int& feet, float& inches)
{
    cout << "\tEnter the feet of height : ";
    cin >> feet;
    cout << "\tEnter the inches of height : ";
    cin >> inches;
}

/*******************************************************************
* Function Name: CalculateMeters
* Author       : Brandon LaPointe
* Description  : Asks the user to input a height in feet and inches
*
* PseudoCode:
* Declare Constants
*
* Declare Variables
*
*   Output "Enter a set of 10 integers: "
* Output smallest
*******************************************************************/
float CalculateMeters(int& heightFeet, float& heightInches)
{
    const float METER = 0.3048;    //Conversion rate of meters per foot
    float meters = 0;              //Height converted to meters

    meters = (((float(heightFeet) * 12) + heightInches) * METER )/ 12;

    return meters;
}

/*******************************************************************
* Function Name: Output
*
* Description: Asks the user to input a height in feet and inches
*
* PseudoCode:
* Declare Constants
*
* Declare Variables
*
*   Output "Enter a set of 10 integers: "
* Output smallest
*******************************************************************/
void Output(float meters)
{
    cout << "Height in Meters : " + meters << endl;
}

/*******************************************************************
* Function Name: ContinueLoop
*
* Description: Asks the user if they would like to continue using
*    the program through input of a char value of 'y' or 'n' in
*    capital or lowercase form.
*
* PseudoCode:
* Declare Constants
*
* Declare Variables
*
*   Output "Enter a set of 10 integers: "
* Output smallest
*******************************************************************/
char ContinueLoop()
{
    char again;

    cout << "\n\nDo you wish to continue? (Y/N) ";
    cin >> again;
    while(toupper(again) != 'Y' && toupper(again) != 'N')
    {
        cout << "Please enter a Y or N" << endl;
        cout << "Do you wish to continue? (Y/N) ";
        cin >> again;
    }

    return again;
}
