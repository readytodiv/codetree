#include <iostream>
using namespace std;

int main() {
    char arr[6] ={'L', 'E', 'B', 'R', 'O', 'S'};
    char input;
    cin >> input;
    for (int i =0; i <6; i++){

        if( input == arr[i]){
            cout << i;
            break;
        }
        
        else if (i == 5 && input != arr[i]){
            cout << "None";
        }

    }
    
    return 0;
}