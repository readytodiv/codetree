#include <iostream>
using namespace std;

int main() {
    int N, M;

    cin >> N >> M;

    int arr[N][N] = {};
    int r,c;

    for(int i=0; i<M; i++){
        cin >> r >> c;
        arr[r-1][c-1] = r*c;
    }


    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}