#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int numbers[N];
    for(int i = 0; i < N; i++){
        cin >> numbers[i];
    }

    for(int j = N-1; j>=0; j--){
        if (numbers[j] % 2 == 0){
            cout << numbers[j]<< " " ; 
        }
    }
    return 0;
}