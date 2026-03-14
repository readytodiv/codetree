#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A < B)
    {
        if (B < C)
        {
            cout << B;
        }
        else
        {
            cout << C;
        
        }

    }

    if(A>B)
    {
        if(A < C)
        {
            cout << A;
        }
        else
        {
            cout << C;
        }
    }

    if(C<A)
    {
        if(A<B)
        {
            cout << A;
        }
        else
        {
            cout << B;
        }
    }
    return 0;
}