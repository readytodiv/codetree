#include <iostream>
using namespace std;

int main() {
    int arr[100] = {};
    int n = 0;
    for(int i = 0; i<100; i++){
        cin >> arr[i];

       
        if(arr[i] == 999 || arr[i] == -999){
            n = i;
            break;

        }

        }
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    

    cout << max << " " << min;
    return 0;
}