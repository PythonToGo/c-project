// Do the following changes to your farm program from Chapter 3 "Exercise 2 - Farm":
 
// Use a switch statement to create a user menu. 
// The user can type in a number (0, 1 or 2) that calls one of the following functions:

// -	1: Data_query
// -	2: Calculate_revenue
// -	0: Exit program
 
// The menu should reappear until the user enters the number 0 to exit the program (do-while loop).
// A corresponding message should appear if a wrong input has been made.

#include <iostream>
#include <stdlib.h>

using namespace std;;

// Declaration of three global variables
int weight= 0;
float dailyPrice=0;
float revenue = 0;

//Prototypes
void Data_query();
void Calculate_revenue();
void Data_output();

void Data_query()
{
    cout << "What is the wight? " << endl;
    cin >> weight;
    cout << "What is the daily price?" << endl;
    cin >> dailyPrice;
}

void Calculate_revenue()
{
    revenue = weight * dailyPrice;
    cout << "Revenue is: " << revenue << endl;
}

int main(void)
{
    int button;

    do 
    {
        cout << "Input the number what you want to read." << endl;
        cout << "1. Data Query, 2. Calculate Revenue, 0. Exit Program" << endl;
        
        cin >> button;

        cin >> button;
            switch (button)
        {
            case 1:
            {
                Data_query();
                break;
            }

            case 2:
            {
                Calculate_revenue();
                break;
            }
        
            default:
            {
                cout << "Please input a valid number.";
                break;
            }
        }
    }
    while(button != 0);
    cout << endl << "See you again." << endl;
    

};
