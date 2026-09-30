#include <iostream>
using namespace std;
#include <string>
#include <cctype>
int main() {
    string A;

    cin >> A;

    int sum =0;

    for(int i=0; i < A.length(); i++){

        if(isalpha(A[i])){
            sum +=0;
        }
        else{
            sum += (A[i]-'0');
        }

    }
    cout << sum;
    return 0;
}