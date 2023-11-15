// Please extend the program:

// -	Declare and define the function �sort� with 2 data arguments:
// 	Array (with a name, a size, and data type integer). 
// The size of the array represents the number of names. 
// 	The goal of this function is to sort the names in an alphabetical order.
// -	Call the function in the main program.
// -	Output the sorted list with names.

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void sort(string names[], int size)
{

}

int main(int argc, char *argv[])
{
	string names[5];
	cout << "Please enter 5 names:" << endl;
	for (int i = 0; i < 5; i++) 
	{
		cout << "Name " << i+1 << ": ";
		cin >> names[i];
	}


return 0;
}