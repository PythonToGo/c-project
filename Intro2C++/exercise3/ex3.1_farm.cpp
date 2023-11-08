// Add the following two functions to your farm program from Chapter 2 "Exercise 2 - Farm":

// -	Data_query() -> To enter the weight and price.
// -	Calculate_revenue() -> Calculates and displays the revenue.

// The variables can be defined globally. 
// Call the two functions.

#include <iostream>
#include <stdlib.h>
using namespace std;;

int weight= 0;
float dailyPrice=0;
//float revenue = weight * dailyPrice;
float revenue = 0;

void Data_query(){
    cout << "how much does a pig weight?" << endl;
    cin >> weight;
    cout << "How much does a pig cost today?" << endl;
    cin >> dailyPrice;
};

void Calculate_revenue(){
    revenue = weight * dailyPrice;
    cout << "Revenue: " << revenue << endl;
};

int main(){
    Data_query();
    Calculate_revenue();

    system("read -n 1 -s -p \"Press any key to continue...\"");
    
};


