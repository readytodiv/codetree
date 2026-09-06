#include <iostream>
using namespace std;

int main() {
    int n =10;
    int arr[10] = {};
    for(int i =0; i<10; i++){
        
        cin >> arr[i];
        if (arr[i]==0){
            n = i;
            break;
        }
    }

    int sum=0;double avg = 0;
    for (int i=0; i<n;i++){
        sum += arr[i];
    }   
    cout << fixed;
    cout.precision(1);
    avg = (double)sum / n;

    cout << sum << " " << avg;

    return 0;
}