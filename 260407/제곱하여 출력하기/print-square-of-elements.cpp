#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int array[N] = {};


    for(int i=0; i<N; i++){
        cin >> array[i];
    }
    for(int k=0; k<N; k++){
        cout << array[k]*array[k] <<" ";
    }
    return 0;
}