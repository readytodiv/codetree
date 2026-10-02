#include <iostream>

using namespace std;

int n;
int arr[50];


void narr(int *a ){
    
    for ( int i = 0; i < n; i++){
        if( arr[i] % 2 ==0) {
            arr[i] = arr[i] / 2;
            cout << arr[i] << " ";
        }
        else{
            cout << arr[i] << " ";
        }
    }

}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    narr(arr);
    

    return 0;
}