// Farmer Max wants to sell a pig. 
// Add the following variables to your program from Chapter 1 "Exercise 1 - Farm": 

// � weight
// � dailyPrice
// � revenue

// The variable weight (integer) should be used to store the weight of the pig.
// The variable dailyPrice (decimal number) should be used to store the daily price of the pig.
// Both variables are to be entered in a dialog with the user via the console. 
// The revenue is then calculated from weight * daily price. 
// Print the revenue on the screen.

#include <iostream>
#include <stdlib.h>
using namespace std;;

int main(){
    int weight= 0;
    float dailyPrice=0;
    //float revenue = weight * dailyPrice;
    float revenue = 0;

    cout << "how much does a pig weight?" << endl;
    cin >> weight;
    cout << "how much does a pig weight?" << endl;
    cin >> dailyPrice;

    revenue = weight * dailyPrice;

    cout << "Revenue: " << revenue << endl;

    system("read -n 1 -s -p \"Press any key to continue...\"");
    
};