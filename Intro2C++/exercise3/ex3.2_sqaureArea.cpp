// #include <iostream>
// using namespace std;

// void output(void);

// int main(){
// 	output();
// 	return 0;
// };

// void output(void){ // there is no parameter. empty is okay

// 	cout << "This is a test output" << endl;
// };

// The following program is to be created:

// -	Displaying a welcome screen
// -	Prompt and entering a decimal number
// -	Squaring the decimal number (in a function, return is the result 
// 	[square = number * number]) and output of the result in the main function
// -	Prompt and entering a radius
// -	Calculation of the circular area (in one function, no return value).
// 	The result of the calculation [area = radius * radius * constant_pi]) 
// 	is to be output in this function.
// 	The variable constant_pi should be declared as a constant and initialized
// 	with the value 3.14.
// 	Use the previously created function for the calculation [radius * radius].

#include <iostream>
#include <stdlib.h>
using namespace std;;

float square(float);
void circularArea(float radius);

float square(float number) {
	return number * number;
};

void circularArea(float r){
	const float pi = 3.14;
	float area;

	area = r * r * pi;
	cout << "The result of area is: " << area << endl;
};

int main(){
	float number;
	float radius;

	cout << "Enter a decimal number: " << endl;
	cin >> number;
	cout << "The result of squaring is: " << square(number) << endl;

	cout << endl;
	cout << "Enter a radius" << endl;
	cin >> radius;

	circularArea(radius);

	system("read -n 1 -s -p\"Press enter key to continue. \"");
};