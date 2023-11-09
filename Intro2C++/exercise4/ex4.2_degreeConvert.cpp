
// Write a program that outputs the conversion from Fahrenheit into Celsius.
// The value of Fahrenheit should be entered.
// The input cannot be negative and should continue until a value greater than or equal to zero has been entered.

// Then define a step size and a maximum value.

// Use a loop to output the value of Fahrenheit and the corresponding Celsius value.


// Example

// Input:

// 	Fahrenheit = 50
// 	Step size = 5
// 	Maximum value = 75

// Output:

// 	Fahrenheit: 50	| Celsius: 10
// 	Fahrenheit: 55	| Celsius: 12.7778
// 	Fahrenheit: 60	| Celsius: 15.5556
// 	Fahrenheit: 65	| Celsius: 18.3333
// 	Fahrenheit: 70	| Celsius: 21.1111
// 	Fahrenheit: 75	| Celsius: 23.88889


// Then create another loop (but now use a different loop type).
// Output the value in Celsius and the following text:

// -	If it is less than or equal to 10 degrees, display the text "it is cold"
// -	If it is less than or equal to 20 degrees, display the text "it is pleasantly warm�
// -	If it is greater than 20 degrees, display the text �it is getting hot�

#include <iostream>
#include <stdlib.h>
using namespace std;;

int main(){
    float fahrenheit;
    int step;
    int max; 

    do {
        cout << "Enter the fahrenheit temperature to convert:  " << endl;
        cin >> fahrenheit;
    }
    while(fahrenheit <= 0);

    cout << "Step size: ";
    cin >> step;
    cout << endl;
    
    cout << "Maximum value: ";
    cin >> max;

    int i, j;
    

    for(int i=1; i<= step; i++){
        float deg;
        deg = ((fahrenheit) - 32)* 5 / 9;
        cout << "Fahrenheit: " << fahrenheit << "\t | " << "Celsius: " << deg << endl;
        fahrenheit = fahrenheit + step;
    }



    for(int i=1; i<= step; i+5) {
        float deg;
        deg= ((fahrenheit)-32)*5/9;

            if (deg <= 10)
    {
        cout << "it is cold" << endl;
        }
    else if ((10< deg) &&(deg <= 20))
    {
        cout << "it is pleasantly warm" << endl;
    }
    else 
    {
        cout << "it is getting hot" << endl;
        cout << fahrenheit << endl;
    }
    }


    
    
    
};