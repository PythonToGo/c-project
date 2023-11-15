// A maximum of 50 animals can live on the farm.
// Create an array that can hold 50 animal numbers 
// and write a for loop that stores the numbers 1-50 in the array.

// Output the entered numbers and their position in the array in a for loop.

#include <iostream>
#include <stdlib.h>
using namespace std;;

int main(){
    int animals[50];
    int i,j;
    j= 0;

    for(i=0; i<50; i++)
    {
        animals[i] = i+1;
    }

    for(i=0; i<50; i++){
        cout << "animals[" << i << "]: " << animals[i] << endl;
    }
    
};

