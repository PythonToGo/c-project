#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    cout << endl << "Program start FOR..." << endl << endl;
    int i;
    cout << "   1. FOR loop " << endl;
        for(i=0;i<12;i++){
                cout << "Increase " << i << endl;
        }
    cout << "   2. FOR loop " << endl;
        for(int j=10; j>= 1; j--){
                cout << "Decrease " << j << endl;
        }
    system("read -n 1 -s -p\"press any key \"");
};