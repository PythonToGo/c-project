#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;;

int main(){
    int lottery[6];
    int i,j;
    bool newNumber;

    srand(time(NULL));
    for(i=0;i<6;i++)
    {
        do
        {
            lottery[i] = rand()% 49 + 1;
            newNumber = true;
            for(j=0; j<i; j++)
            {
                if (lottery[j] == lottery[i])
                {
                    newNumber = false;
                }

            }
        }
        while (!newNumber);
    }
    for(i=0; i < 6; i++)
    {
        cout << lottery[i] << " " << endl;
    }
    

system("read -n 1 -s -p \"Press any key to continue...\"");
};