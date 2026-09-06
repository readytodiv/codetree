#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;
    double sum=0;

    double arr[N] = {};
    for (int i=0; i<N;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum /N << endl;
    
    if ((sum /N) >=4.0){
        cout << "Perfect";
    } 
    else if ((sum/N)>=3.0){
        cout << "Good";
    }
    
    else{
        cout << "Poor";
    }

    return 0;
}