#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[10] = {};
    for(int i=0; i<10; i++){
        cin >> arr[i];

    }

    int sum2 =0;
    double sum3 =0;

    for(int i=1; i<10; i+=2){
        sum2 +=arr[i];

    }
    int cnt =0;
    for(int i=2; i<10; i+=3){
        sum3 +=arr[i];
        cnt +=1;
    }

    double avg3 = sum3 /cnt;

    cout << fixed;
    cout.precision(1);
    
    cout << sum2 << " " << avg3;

    return 0;
}