#include <iostream>
using namespace std;

int main() {
    int N , M;

    cin >> N >> M;

    int arr[N] = {};
    for( int i=0; i<N; i++){
        cin >> arr[i];
    }
    
    int cnt = 0;

    for( int i=0; i<N; i++){
        if( M == arr[i]){
            cnt ++;
        }
    }
    cout << cnt;
    
    

    return 0;
}