#include <iostream>
#include <string>

using namespace std;;

int main(){
    string str1 = "My house";
    string str2 = str1.substr(3,5);
    string str3 = str1.erase(1,3);

    cout << str2 << endl;
    cout << str3 << endl;

    string strA = "Apple";
    string strB = "BCDEFGHIJK";
    string strC = strA.replace(2,0,strB);

    cout << strC << endl;

    string str4 = "abcd";
    cout << str4.length() << endl;
    cout << str4.find("d") << endl;
};