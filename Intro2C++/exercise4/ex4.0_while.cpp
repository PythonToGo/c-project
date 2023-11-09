#include <iostream>
#include <stdlib.h>

using namespace std;;

int main(){
    cout << endl << " Program start WHILE " << endl << endl;

    int i = 6;
    
    while(i > 0){
        i--;
        cout << endl << "I have to send " << i;
        cout << " parcels.";
    }

    cout << "DONE! "<< endl << endl;
};