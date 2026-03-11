#include <iostream>
using namespace std;

int main() {
    int A, N;
    cin >> A >> N;
    int i;
    for(i=0; i<N; i++)
    {
        
        cout << A+N << endl;
        A= A+N;
    }

    return 0;
}