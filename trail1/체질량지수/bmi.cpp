#include <iostream>
using namespace std;

int main() {
    int h, w;
    double b;
    cin >>h >> w;
    b= (10000 * w) / (h*h);
    if (b >= 25){
        cout << b<<"\n"<<"Obesity";

    }
    else{
        cout << b;
    }
    return 0;
}