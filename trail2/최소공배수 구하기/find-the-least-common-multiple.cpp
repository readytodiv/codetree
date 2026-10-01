#include <iostream>

using namespace std;

int n, m;

int func(int n, int m){

    if(n>m){

        for(int i=m; i>0; i--){
            if(n%i==0 && m%i==0){
                
                return i;
            }

        }
    }
    else{

        for(int i=n; i>0; i--){
            if(n%i==0 && m%i==0){
                
                
                return i;
            }

        }

    }
}


int bae(int n, int m){
    return (n*m) / func(n,m);
}

int main() {
    cin >> n >> m;

    cout << bae(n, m);
    

    return 0;
}