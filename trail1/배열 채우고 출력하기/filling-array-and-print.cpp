#include <iostream>
#include <string>
using namespace std;

string arr[10] = {};

int main() {
    for (int i = 0; i<10; i++){
        cin >> arr[i];

    }
    for (int j = 0; j<10; j++){
        cout << arr[9-j];
    }    

    return 0;
}