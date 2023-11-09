#include <iostream>
#include <stdlib.h>

using namespace std;;

int main(){
    int i = 5, j=9;
    if((i==10)&& (j==10))
    {
        cout << "Both values are equal to ten" << endl;
    }
    else if ((i==10)|| (j==10))  
    {
        cout << "One value or both values are equal to ten" << endl;
    }
    else if ((i!=10)&& !(j==10)){
        cout << "Both values are unequal to ten" << endl;
    };
};

int main(){
    int min;
    float a,b;
    min = (a < b)? a: b;
    // Value = (condition)? if True a : False b
};

// int main(){
//     int Penalty;
//     float AboveSpeedLimit;

//     switch (AboveSpeedLimit)
//     {
//     case 0: {
//         Penalty = 0;
//         break;
//         }
//     case 10: {
//         Penalty = 20;
//         break;
//     }
//     case 15 : {
//         Penalty = 50;
//         break;
//     }

//     case 20: 
//     case 25:
//     case 30: {
//     Penalty = AboveSpeedLimit * 10;
//     break;
//     }

//     default:{
//         Penalty = Subpoena();
//         PenaltyDegree - Verdict();
//     }

//     }
// };