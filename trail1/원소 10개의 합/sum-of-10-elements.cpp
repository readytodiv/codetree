#include <iostream>
using namespace std;
int c;
int sum=0;
int main() {
    for (int i=0; i<10; i++){
        cin >> c;
        sum += c;
    }
    cout << sum;
    return 0;
}