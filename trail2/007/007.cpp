#include <iostream>
#include <string>

using namespace std;

class secret {
    public :
        string a;
        char b;
        int t;

        secret(string s, char meet, int time){
            this-> a = s;
            this-> b = meet;
            this-> t = time;
        }
};





int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;
    secret s1 = secret(secret_code, meeting_point, time);

    cout << "secret code : "<< s1.a << endl;
    cout << "meeting point : " << s1.b <<endl;
    cout << "time : " << s1.t << endl;
    

    return 0;
}