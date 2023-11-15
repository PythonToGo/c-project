#include <iostream>
#include <stdlib.h>
using namespace std;;

int main(){
    int table[2][3] = {{10,11,12},{2,3,4}};

    cout << "in the 1st row, 2nd column you can see " << table[0][1] << endl;
    cout << "in the 2nd row, 1st column you can see " << table[1][0] << endl;
    cout << "in the 2nd row, 2nd column you can see " << table[1][1] << endl;

};