#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 5;

    int c;
    c= a;
    a = b;
    b = c;
    
    cout << a << "\n" << b;
    return 0;
}