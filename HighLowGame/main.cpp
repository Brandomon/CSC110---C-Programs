#include <iostream>
#include <iomanip>
#include <cstdlib>      //for random number generator
#include <ctime>        //for current system time to seed random number generator
#include <stdlib.h>     //used to clear screen
using namespace std;

void InputGuess(int& guess);                                                //Gets input of guess from user and passes it by reference to main
void CorrectGuess(int& indexFlag, int index, int MAXGUESS, int ary[]);      //Sets flag of index before clearing screen and displaying congratulatory message and list of guesses
void BetterLuckNextTime(int index, int randomNum, int MAXGUESS, int ary[]); //Clears the screen and displays a message stating "Better luck next time" before listing the guesses
void ContinueLoop(char& again);                                             //Asks the user if they would like to continue using the program through a 'Y' or 'N' input
/********************************************************************************
* Program Name: HighLowGame
* Author      : Brandon LaPointe
* Description : This program will simulate the high-low game.  For each execution
* of the program, the game will generate a random number in the inclusive range of
* 1 to 100.  The user will have up to 10 chances to guess the value.  The program
* will keep track of all the user’s guesses in an array.  For each guess, the
* program will tell the user if his/her guess was too high or too low.  If the
* user is successful, the program will stop asking for guesses and clear the screen,
* display the list of guesses, and show a congratulatory message stating how many
* guesses he/she took.  If the user does not guess the correct answer within 10
* tries, display the list of guesses, and show him/her the correct value with a
* message stating that he/she was not successful.  Regardless of the outcome, the
* program will give the user a chance to run the program again with a new random
* number. MUST use functions.
*
* PseudoCode:
* BEGIN HighLowGame
*    DO
*       random = random number between 1 and 100 (inclusive).
*       FOR count equal to zero, count is less than MAXGUESS, increment count by 1)
*          InputGuess Function
*          Set value of location in array equal to guess
*          IF guess is equal to randomNum
*              CorrectGuess Function
*              Set index equal to MAXGUESS
*          ELSE IF guess is less than randomNum
*              Display "Guess was too low. Try again..."
*          ELSE guess is greater than randomNum
*              Display "Guess was too high. Try again..."
*          END IF
*          IF index is equal to MAXGUESS
*              BetterLuckNextTime Function
*          ContinueLoop Function
*    WHILE again is equal to y or again is equal to Y
* END HighLowGame
********************************************************************************/
int main()
{
    //Declare Constants
    int MAXGUESS = 10;
    int MAXRAND = 100;

    //Declare Variables
    int randomNum = 0;
    int guess;
    int index;
    int indexFlag;
    int ary[MAXGUESS];
    char again;

    srand(time(0));

    do
    {
        randomNum = rand() % MAXRAND + 1;
        cout << "\n\n" << endl;
        for (index = 0; index < MAXGUESS; index++)
        {
            InputGuess(guess);
            ary[index] = guess;
            if (guess == randomNum)
            {
                CorrectGuess(indexFlag, index, MAXGUESS, ary);
                index = MAXGUESS;
            }
            else if (guess < randomNum)
                cout << setw(71) << "Guess was too low..." << endl;
            else  //Guess was greater than randomNum
                cout << setw(72) << "Guess was too high..." << endl;
        }
        if (index == MAXGUESS)
            BetterLuckNextTime(index, randomNum, MAXGUESS, ary);
        ContinueLoop(again);
    } while (again == 'Y' || again == 'y');

    return 0;
}

/*******************************************************************
* Function Name: InputGuess
* Author       : Brandon LaPointe
* Description  : Asks the user to input their guess of the random
*    number between 1 and 100 which is passed by reference back to
*    the main method
*
* PseudoCode:
* BEGIN InputGuess
*    Display "Enter your guess : "
*    Input guess
* END InputGuess
*******************************************************************/
void InputGuess(int& guess)
{
    cout << setw(70) << "Enter your guess : ";
    cin >> guess;
}

/*******************************************************************
* Function Name: CorrectGuess
* Author       : Brandon LaPointe
* Description  : Sets a flag at the index of the correct guess + 1 to
*    show the number of guesses before the correct number was guessed.
*    The function then clears the screen and displays a congratulatory
*    message stating how many guesses he/she took along with a list of
*    the guesses taken
*
* PseudoCode:
* BEGIN CorrectGuess
*    Set indexFlag equal to index + 1
*    Clear screen
*    Display congratulatory message
*    Display the correct guess number
*    Display a list of the guesses made
*       FOR
*       Input again
* END CorrectGuess
*******************************************************************/
void CorrectGuess(int& indexFlag, int index, int MAXGUESS, int ary[])
{
    indexFlag = index + 1;
    system("CLS");
    cout << "\n\n" << setw(69) << "Congratulations!!!" << endl;
    cout << setw(53) << "Guess number " << indexFlag << " was the correct guess!!!\n" << endl;
    for (index = 0; index < indexFlag; index++)
    {
        if (index < 9) //If else used to align index 10 due to extra character
        {
            cout << setw(58) << "Guess #" << index + 1 << setw(10) << ary[index] << endl;
        }
        else //index of 10
            cout << setw(58) << "Guess #" << index + 1 << setw(9) << ary[index] << endl;
    }
}

/*******************************************************************
* Function Name: BetterLuckNextTime
* Author       : Brandon LaPointe
* Description  : Clears the screen and displays a "better luck next
*    time" message before displaying the correct random number and
*    a list of the guesses made by the user.
*
* PseudoCode:
* BEGIN BetterLuckNextTime
*    Display "Better luck next time!"
*    Display "The correct number was (randomNum)!"
*    FOR index equals 0, index is less than MAXGUESS, increment index
*        Display the guess number and the guess value stored within the array
*    END FOR
* END BetterLuckNextTime
*******************************************************************/
void BetterLuckNextTime(int index, int randomNum, int MAXGUESS, int ary[])
{
    system("CLS");
    cout << "\n\n" << setw(73) << "Oof! Better luck next time!" << endl;
    cout << setw(70) << " The correct number was " << randomNum << "\n" << endl;
    for (index = 0; index < MAXGUESS; index++)
    {
        if (index < 9) //If else used to align index 10 due to extra character
        {
            cout << setw(58) << "Guess #" << index + 1 << setw(10) << ary[index] << endl;
        }
        else //index of 10
            cout << setw(58) << "Guess #" << index + 1 << setw(9) << ary[index] << endl;
    }
}

/*******************************************************************
* Function Name: ContinueLoop
* Author       : Brandon LaPointe
* Description  : Asks the user if they would like to continue using
*    the program through input of a char value of 'y' or 'n' in
*    capital or lowercase form.
*
* PseudoCode:
* BEGIN ContinueLoop
*    Display "Do you wish to continue? (Y/N) : "
*    Input again
*    WHILE capital again is not equal to Y and capital again is not equal to N
*       Display error message
*       Display "Do you wish to continue? (Y/N) : "
*       Input again
* END ContinueLoop
*******************************************************************/
void ContinueLoop(char& again)
{
    cout << "\n\n" << setw(79) << "Do you wish to continue?    (Y/N)   : ";
    cin >> again;
    while(toupper(again) != 'Y' && toupper(again) != 'N')
    {
        cout << "\n" << setw(76) << "ERROR - Please enter a \"Y\" or \"N\"" << endl;
        cout << "\n" << setw(79) << "Do you wish to continue?    (Y/N)   : ";
        cin >> again;
    }
}
