#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int s = a+b;

    string S = to_string(s);
    int cnt =0;
    for(auto c : S){
        if(c == '1'){
            cnt++;
        }
    }


    cout << cnt;
}