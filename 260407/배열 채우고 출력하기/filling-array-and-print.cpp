#include <iostream>
using namespace std;

int main() {
    char array[10]={};

    for(int i =0; i < 10; i++){
        cin >> array[i];
    };
    for(int k=9; k>=0; k--){
        cout << array[k];
    };
    return 0;
}