#include <iostream>
using namespace std;

int main() {
    int arr[10] = {};
    for(int i=0 ; i< 10; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int count = 0;
    for(int i=0; i < 10; i++){
        if (arr[i] ==0){
            break;
        }
        if (arr[i] % 2 == 0){
            sum += arr[i];
            count += 1;
        }

    }
    cout << count <<" " << sum;

    return 0;
}