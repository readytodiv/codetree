#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
   
    int cnt[10] = {};
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        cnt[num]++;

    }

    for(int i=1; i<10; i++){
        cout << cnt[i] << endl;

    }
    return 0;
}