#include <iostream>
using namespace std;

int main() {
    char s;
    cin >>s;

    if(s == 'z'){

        cout << 'a';
    }
    else{
        int asnum = (int)s;
        char b = (char)asnum+1;

        cout << b;
        
    }
    

    return 0;
}