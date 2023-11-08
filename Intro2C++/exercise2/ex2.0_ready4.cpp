#include <iostream>
#include <stdlib.h>

using namespace std;

inline int maximum (int a, int b) {
    return a > b ? a : b;
}

int main(){
    cout << maximum(4,7) << endl;
    cout << maximum(3,9) << endl;

    system(" read -n 1 -s -p");
    return 0;
}
