// Program the game "Guessing Numbers": The computer generates a random number
// between 1 and 100 which the player has to guess. 
// At each pass, the system tells you whether the number entered was too large or too small.
// You have 6 tries to guess the number.

// Tip: Random numbers are generated as follows: 
// A single call of srand(time(NULL)) initializes the random number generator. 
// Subsequently, each call of rand()%100 returns a random number between 0 and 99.
// The functions are declared in <ctime> and <cstdlib>.

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;;

int main(){

    int target, guess;
    int count = 1;
    srand(time(NULL));
    target = rand()%100 + 1;

    cout << "Guessing Numbers. You have 6 chances to guess the number." << endl;

    do{
        cout << "Input a number: " << endl;
        cin >> guess;
        count += 1;
        if(guess > target){
            cout << "The number is larger than target number." << endl;
        }
        else if (guess < target){
            cout << "The number is smaller than target number." << endl;
        }

    }
    while((guess!=target)&&(count <= 6));

    if (guess == target){
        cout << "You win!" << endl;

    } else {
        cout << "You lost! Try it again." << endl;
    }

};

