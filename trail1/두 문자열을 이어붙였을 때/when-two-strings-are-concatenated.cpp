#include <iostream>
using namespace std;
#include <string>


int main() {
    string A, B;

    cin >> A >> B;

    string str1, str2;
    str1 = A+B;
    str2 = B+A;

    if( str1== str2){

        cout << "true";

    }
    else{

        cout << "false";
    }


    return 0;
}