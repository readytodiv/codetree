#include <iostream>
using namespace std;
#include <string>
int main() {
    string A, B;
    cin >> A >> B;

    int cnt = 0;
    size_t pos = A.find(B); //처음 찾은 위치

    while (pos != string::npos){ //거기에 값이 있다면
        cnt++; // 카운트 하고 
        pos = A.find(B, pos+1); //다음위치를 지정해서 와일문 돌리기
    }
    cout << cnt;
    return 0;
}