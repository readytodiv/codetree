#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int v = b;

    b =a;
    a=c;
    c=v;


    cout << a << endl;
    cout << b << endl;
    cout << c << endl; 
    return 0;
}