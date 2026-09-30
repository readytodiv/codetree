#include <iostream>
using namespace std;
#include <string>


int main() {
    string str;
    cin >> str;
    char a;
    cin >> a;

    if (str.find(a) != string::npos){
        cout << str.find(a);

    }

    else{
        cout << "No";
    }

    return 0;
}