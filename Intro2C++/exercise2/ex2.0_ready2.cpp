#include <iostream>
#include <stdlib.h>
using namespace std;

int multiply(int, int);
void showResult(int);

int main()
{
    int x,y, result;
    cout << " Please enter the first value: ";
    cin >> x;
    cout << " Please enter the seconde value: ";
    cin >> y;

    result = multiply(x,y);

    showResult(result);

    cout << endl << endl << " Continue with keystroke ...";
    
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
    
    return 0;

    // int result;
    // result = multiply(3,4);
    // showResult(result);

    // cout << endl;
    // getchar();
}

int multiply(int a, int b)
{
    return a * b;
}

void showResult(int result)
{
    cout << "Result of the multiplication: " << result << endl;
}