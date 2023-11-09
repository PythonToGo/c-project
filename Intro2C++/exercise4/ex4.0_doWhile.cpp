#include <iostream>
#include <stdlib.h>
using namespace std;;

int main(){
    cout << endl << "Program start DO WHILE.. " << endl << endl;
    int i= 6;

    do {
        i--;
        cout << endl << "I have to send " << i;
        cout << " parcels.";
        
    }
    while(i >0);
    cout <<  endl << "DONE! " << endl << endl;  
};