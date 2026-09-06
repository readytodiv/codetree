#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sum = 0;
    double arr[8] = {};
    for(int i =0; i<8 ;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout<<fixed;
    cout.precision(1);
    cout << sum / 8;
    
    return 0;
}