#include <iostream>
using namespace std;
#include <string>

int main() {
    string str;
    cin >> str;

    int N;
    cin >> N;

    int len = str.length();
    int cnt =0;

    for (int i = len-1; i >=0; i--){

        if (cnt >= N){
            break;
        }

        cout << str[i];
        cnt++;
    }
    return 0;
}