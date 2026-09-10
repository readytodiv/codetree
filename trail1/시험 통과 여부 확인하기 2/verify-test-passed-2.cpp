#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[4] = {};
    int cnt =0;
    for(int i=0; i < N; i++){

        for(int j=0;j<4; j++){
            cin >> arr[j];
        }
        int sum = 0;
        for(int k=0; k<4;k++){
            sum +=arr[k];
        }
        int avg = sum / 4;

        if (avg >=60){
            cout << "pass" <<"\n";
            cnt += 1;
        }
        else{
            cout << "fail" <<"\n";
        }



    }

    cout << cnt;
    return 0;
}