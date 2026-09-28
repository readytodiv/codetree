#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[100] = {};

    for(int i=0; i<N; i++) {
        
        cin >> arr[i];
    }
    int mini = arr[1] - arr[0];

    for(int i=1; i<N; i++){
        for(int j=0; j < i; j++)
        if((arr[i] - arr[j]) < mini){
            mini = arr[i] - arr[j];
        }

    }

    cout << mini;
    return 0;
}