#include <iostream>
using namespace std;
#include <string>

int main() {
    string str;
    char str2;
    getline(cin, str);

    cin >> str2;

    int n = str.length();
    int cnt = 0;
    for(int i=0; i<n; i++){
        
        if(str[i] == str2){
            cnt++;
        }

    
    }

    cout << cnt;

    return 0;
}