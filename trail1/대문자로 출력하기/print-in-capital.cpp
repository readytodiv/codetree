#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main() {
    string str;
    cin >> str;

    int len = str.length();
    for (int i =0; i<len; i++){

        if(isalpha(str[i])){
            cout << char(toupper(str[i]));
        }
    }      
    return 0;
}