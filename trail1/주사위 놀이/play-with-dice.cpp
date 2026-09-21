#include <iostream>
using namespace std;

int main() {

    int arr[10] ={};

    for(int i=0; i<10; i++){
        cin >> arr[i];
    }    
    int cnt[7] ={};
    for(int i=0; i<10; i++){
        cnt[arr[i]]++;
    } 
    for(int i=1; i<7; i++){
        cout <<i <<" - "<< cnt[i] << endl;
    } 


    return 0;
}