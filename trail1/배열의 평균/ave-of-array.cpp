#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    
    double sum =0;
    double p1, p2;
    int b1, b2, b3, b4;
    int c;

    for(int j=0; j<4; j++){
        sum += arr[0][j];
    }
    p1 = (double)sum /4;
    sum = 0;
    for(int j=0; j<4; j++)
        sum += arr[1][j];
    p2 = (double)sum /4;
    sum = 0;

    cout << fixed;
    cout.precision(1);
    cout << p1 <<" "<< p2 << endl;

   for(int j=0; j<4; j++){
        for(int i=0; i<2; i++){
            sum += arr[i][j];
        }
        cout << sum /2 << " ";
        sum =0;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
        
    }
    cout << endl;
    cout << sum / 8;

    

    return 0;
}