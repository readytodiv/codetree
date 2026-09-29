#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N][N];
    int num = 1;
    for(int j=0; j<N; j++){
        for(int i=0; i<N; i++){
            arr[i][j] = num;
            num ++;
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}