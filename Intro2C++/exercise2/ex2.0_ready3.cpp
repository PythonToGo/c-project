#include <iostream>
#include <stdlib.h>
using namespace std;

int a,b;

void change()
{
    int a;
    a = 0;
    {
        int a = 20;
        cout << "The value of a within the second block is: " << a << endl;
        
    }
    cout << "The value of a within the change function is: " << a << endl;
}

int main() 
{
    a = b = 10;

    cout << "Before calling change function, the value of a is: " << a << " and b: " << b << endl; 
    change(); // Calling change() function
    cout << "After calling change function, the value of a is: "<< a << " and b: " << b << endl;;

    system("read -n 1 -s -p \"Press any key to continue...\"");
    return 0;
}


