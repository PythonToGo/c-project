// Use your program from �Exercise 2 - 
// Fahrenheit into Celsius� from Chapter 4 and modify it as follows:

// You want to store the celsius values in an array.

// Create an array that can hold 10 Celsius values.
// The entered Fahrenheit value is increased in increments of 10.

// Use a for loop to do this.

// Use a while loop to output the calculated Celsius values 
// with the corresponding Fahrenheit values and the index.

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;;

int main(){
    int Celsius[10];
    int fahrenheit;
    int i;
    bool stop = true;
    string answer = "yes";

    do
    {   
        for(i=0; i<10;i++)
        {
            cout << "Please enter a fahrenheit temperature: " << endl;
            cin >> fahrenheit;
            
            Celsius[i] = ((fahrenheit) - 32)* 5 / 9;

            cout << "The celsius degree is : " << Celsius[i] << endl;
            cout << endl;
            cout << "Do you want to convert fahrenheit temperature to degree more?" << endl;
            cout << "If yes, enter \"yes\". If no, enter \"no\"." << endl;
            cin >> answer;
        }
    }
    while(answer == "yes");

};