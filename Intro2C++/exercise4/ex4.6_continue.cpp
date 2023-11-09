// Create a loop in which you output all numbers from 1 to 100, 
// which are divisible by the number 2.
// Use the continue statement to skip the numbers 
// that are not divisible by the number 2!

#include <iostream>
#include <stdlib.h>
using namespace std;;

int main(){
    int a;

    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 1) {
            continue;
        } else {
            cout << i << " is divisible by 2." << endl;
        }
    }
};