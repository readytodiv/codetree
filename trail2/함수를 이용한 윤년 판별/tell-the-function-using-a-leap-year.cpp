#include <iostream>

using namespace std;

int y;

void yunistrue(int y){
    if(y % 4 ==0){
        
        if(y % 100==0 && y %400 !=0){
            cout<< "false";
            return;
        }
         cout << "true";
        return;
    }
    else{
         cout<< "false";
         return;
    }
}

int main() {
    cin >> y;

    yunistrue(y);

    return 0;
}