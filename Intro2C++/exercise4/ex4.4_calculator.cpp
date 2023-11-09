// Use the switch-case statement to program a mini calculator that
// reads two numbers and an operator (+, -, *, /) and outputs the result.

// The input should be made directly in one line, e. g. 5+4

// Tip: You can use several variables with cin, e. g. cin >> var1 <<< var2;

// Any division by 0 is to be intercepted.

// If an incorrect operator is entered, an error message should appear.
#include <iostream>
#include <stdlib.h>
using namespace std;;

int var1;
int var2;
char op;
float result;

int main(){

    cout << "Welcome to C++ calculator!" << endl;
    cout << "Please input two numbers connecting with an operator. e.g. 5+4." << endl;
    
    
    cin >> var1 >> op >> var2;
    
    cout << var1 << op << var2 << "=";

    switch (op)
    {
    case '+':
        cout << var1 + var2 << endl;
        break;
    case '-':
        cout << var1 - var2 << endl;
        break;
    case '*':
        cout << var1 * var2 << endl;
        break;
    case '/':
        if (var2==0){
            cout << "Division cannot with 0.";
        } 
        else{
            return var1 / var2;
        };
        break;
    default:
        cout << "please use other operators." << endl;
        break;
    }


};