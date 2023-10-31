#include <iostream>
using namespace std;

int main()
{
    short x = 32767;
    cout << "x = " << x << endl; // x = 32767
    x = x + 1;
    cout << "x = " << x << endl; // x = -32768
    
    // x= 32767
    // 32768 - 32767 = 1
    // 1 - 1 = 0
    // -32768 + 1 = -32

    int a=5, b=2;
        float c;
            c = a/b;
    cout << "c = " << c << endl; // c = 2
            c = (float)(a)/(float)(b);
    cout << "c = " << c << endl; // c = 2.5


    int z = 2;
    z += 10;
    cout << z << endl; // 12
    
}

