#include <iostream>

using namespace std;

int n, m;

void func(int n, int m){

    if(n>m){

        for(int i=m; i>0; i--){
            if(n%i==0 && m%i==0){
                
                cout << i;
                return;
            }

        }
    }
    else{

        for(int i=n; i>0; i--){
            if(n%i==0 && m%i==0){
                
                cout <<i;
                return;
            }

        }

    }
}


int main() {
    cin >> n >> m;

    func(n, m);

    return 0;
}