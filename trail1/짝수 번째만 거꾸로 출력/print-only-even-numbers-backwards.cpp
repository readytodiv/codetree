#include <iostream>
using namespace std;
#include <string>

int main() {
    string str;
    cin >> str;
    int len = str.length();


    for(int i = len; i>0; i--){
        if ( i%2==0 ){

            cout << str[i-1];

        }
    }
    

    return 0;
}