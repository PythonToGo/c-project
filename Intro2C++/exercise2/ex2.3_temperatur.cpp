
// We are planning a trip to America. The units for temperature, distance and currency in America
//                                               are different from the units used in Germany. 
// In order to facilitate our planning, we want to write a program 
//                              that converts the temperature from Fahrenheit to Celsius.
// The conversion formula is as follows: 
//  Celsius = ((temperature_fahrenheit -  32)*5)/9 

// The following requirements have to be met:

// 1.	Welcome the user, input of temperature in Fahrenheit
// 2.	Output of the entered temperature in Fahrenheit
// 3.	Conversion from Fahrenheit to Celsius. The 32 in the formula is to be declared as a constant, this constant should also be used for the conversion. 
// 	5/9 should remain in the formula.
// 4.	Output of the temperature in Celsius

#include <iostream>
#include <stdlib.h>

using namespace std;;

int main(){
    float temperature = 0;
    float distance = 0;
    float currency = 0;
    float celsius;

    cout << "Hello. Please fill the temperature in Fahrenheit." << endl;
    cin >> celsius;
    
    celsius = ((temperature) - 32)* 5 / 9;

    cout << endl;
    cout << "The temperature in Celsius is: " << celsius << endl;

    
    system("read -n 1 -s -p \"Press any key to continue...\"");

};

