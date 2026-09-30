#include <iostream>
using namespace std;
#include <string>

int main() {
    string A, B;

    cin >> A >> B;

    string s1, s2;
    s1 = A+B;
    s2 = B+A;

    cout << stoi(s1) + stoi(s2);
    return 0;
}