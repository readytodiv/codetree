#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int> arr(10);
    arr = {};
    for(int i=0; i<10;i++){
        cin >> arr[i];
    }
    cout<< arr[2] + arr[4] + arr[9];

    return 0;
}