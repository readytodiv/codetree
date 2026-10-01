#include <iostream>

using namespace std;

int a, b;

bool Isprime(int n){
    for (int i=2; i<n; i++){
        if (n % i == 0){
            return false;
            
        }
        
    }
    return true;
}

int primehap(int a, int b){
    int sum = 0;
    for(int i=a; i<b+1; i++){
        
        if (Isprime(i)){
            sum += i;
        }
    } return sum;
}


int main() {
    cin >> a >> b;

    cout << primehap(a, b);    

    return 0;
}