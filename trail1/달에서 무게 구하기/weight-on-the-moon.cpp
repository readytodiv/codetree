#include <iostream>
using namespace std;

int main() {
    int chu = 13;
    double g = 0.165;

    cout << fixed; 
    cout.precision(6);
    cout << "13 * 0.165000 = "<< chu * g;
    return 0;
}