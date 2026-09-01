#include <iostream>
using namespace std;

int arr[10]= {};
int sum = 0;
double avg =0;

int main() {
    
    
    for(int i=0; i<10; i++){

        cin >> arr[i];

    }

    for(int i =0;i<10; i++){
        
        if(arr[i] >= 250){
            int sum =0;
            for(int j=0; j<i; j++){
                sum += arr[j];

            }
            double avg=0;
            cout<<fixed;
            cout.precision(1);
            avg = (double)sum /i;
            cout << sum << " " << avg;


            return 0;

        }

        else{
            
            sum += arr[i];
        }
        }
        avg = (double)sum /10;
        cout << sum <<" " << avg;

    
    

    return 0;
}