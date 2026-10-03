#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string str;

int main() {
    cin >> str;

    sort(str.begin(), str.end());
    
    for (int i=0; i < str.length(); i++){

        cout << str[i];
    }

    return 0;
}