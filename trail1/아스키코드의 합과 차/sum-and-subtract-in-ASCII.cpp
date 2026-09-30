#include <iostream>
using namespace std;

int main() {
    char a, b;

    cin >> a >> b;

    int A = int(a);
    int B = int(b);

    cout << A + B << " ";
    if( A > B){
        cout << A-B;
    }
    else{
        cout << B-A;
    }
    return 0;
}