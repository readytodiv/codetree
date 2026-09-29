#include <iostream>
using namespace std;

int main() {
    int N, M;

    cin >> N >> M;

    int arr[N][M] ={};
    int num = 1;
    for (int i =0; i<N; i++) {
        for (int j=0; j<M;j++){
            arr[i][j] = num;
            num ++;
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}