#include <iostream>
#include <iomanip>
using namespace std;

/*
Declare variables
    Declare menuChoice as integer
    Declare numberTickets as integer
    Declare finalCost as double
    Declare price as double

Display menu
    Display "Welcome to Wally World's Ticket Kiosk!", EOL
    Display "Please make your selections from the following menu.", EOL
    Display "1) Adult Ticket with Rides", EOL
    Display "2) Adult Ticket no Rides", EOL
    Display "3) Kids Ticket (12 and younger)", EOL
    Display "4) Senior Citizen Tickets (55 and over)", EOL
    Display "Please make selection: "

Get menuChoice
    Input menuChoice

Determine price of ticket
    If menuChoice == 1
        price = 75.50
    Else If menuChoice == 2
        price = 50.00
    Else If menuChoice == 3
        price = 65.50
    Else If menuChoice == 4
        price = 35.00
    Else
        Display "Invalid menu choice"
    End If

Get numberTickets
    Display "Enter the number of tickets: "
    Input numhberTickets

Calculate finalCost
    finalCost = price * numberTickets

Display finalCost
    Format for 2 decimal places
    Display "Thank you for using the ticket kiosk.", EOL
    Display "Your total is: $", finalCost, EOL
    Display "Have a nice day!", EOL
*/



int main()
{
    int menuChoice;
    int numberTickets;
    double finalCost;
    double price;

    cout << "Welcome to Wally World's Ticket Kiosk!" << endl;
    cout << "Please make your selections from the following menu." << endl;
    cout << "1) Adult Ticket with Rides" << endl;
    cout << "2) Adult Ticket no Rides" << endl;
    cout << "3) Kids Ticket (12 and younger)" << endl;
    cout << "4) Senior Citizen Tickets (55 and over)" << endl;
    cout << "Please make selection: ";
    cin >> menuChoice;

    switch(menuChoice)
    {
        case 1:
            price = 75.50;
            break;

        case 2:
            price = 50.00;
            break;

        case 3:
            price = 65.50;
            break;

        case 4:
            price = 35.00;
            break;

        default:
            cout << "\nInvalid menu choice" << endl;
    }

    cout << "\nPrice is " << price << endl;

    if(menuChoice >= 1 && menuChoice <= 4)
    {
        cout << "\nEnter the number of tickets: ";
        cin >> numberTickets;
    }
    else
    {
        cout << "You are being charged $0.00" << endl;
    }


return 0;
}
