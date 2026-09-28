#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N] = {};
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == 2) {
            cnt++;
        }
        if (cnt == 3){
            cout << i+1;
            break;
        }
    }

    return 0;
}
