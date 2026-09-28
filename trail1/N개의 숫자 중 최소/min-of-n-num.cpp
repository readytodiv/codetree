#include <iostream>

using namespace std;

int N;
int arr[100] = {};

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];

    }

    int min = arr[0];

     for (int i = 1; i < N; i++) {
        if (arr[i] < min){
            min = arr[i];
        }

    }
    int cnt =0;
     for (int i = 0; i < N; i++) {
        if(arr[i] == min){
            cnt ++;
        }

    }
    cout << min << " " << cnt;

    return 0;
}
