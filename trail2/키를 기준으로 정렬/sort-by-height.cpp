#include <iostream>
#include <string>
#include <algorithm>   // sort를 쓰려면 추가

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class People {
    public:
        string name;
        int height, weight;

        People() {}   // ① 객체 배열을 만들려면 기본 생성자가 필요
        People(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};   // ② 클래스 끝에는 세미콜론

// ③ 키가 작은 사람이 앞으로 오게
bool cmp(const People &a, const People &b) {
    return a.height < b.height;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> height[i];
        cin >> weight[i];
    }

    // ④ 입력받은 값으로 People 객체 만들기
    People people[10];
    for (int i = 0; i < n; i++)
        people[i] = People(name[i], height[i], weight[i]);

    // ⑤ 키 기준 정렬
    sort(people, people + n, cmp);

    // ⑥ 출력
    for (int i = 0; i < n; i++)
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << "\n";

    return 0;
}