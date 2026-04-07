#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int arr[100] = {};

    arr[0]=a;
    arr[1]=b;
    
    cout << arr[0] << " " << arr[1] << " ";

    for(int i=2; i<10; i++){    

        arr[i]= arr[i-2] + arr[i-1];
        if (arr[i] >=10){
            arr[i]=arr[i]-10;
        };
        cout << arr[i]<< " ";


    };
    return 0;
}