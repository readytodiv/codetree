#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];
int nx = 0, ny = 0;

int dx[4] = {0, 1, -1}, dy[4] = {0, 1, -1};



int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'N'){
            for(int j=0; j < dist[i]; j++){
            nx += dx[0]; 
            ny += dy[1]; 
        }}

        else if (dir[i] == 'E'){
            for(int j=0; j < dist[i]; j++){
            nx += dx[1];
            ny += dy[0];
        }}
        else if (dir[i] == 'S'){
            for(int j=0; j < dist[i]; j++){
            nx += dx[0];
            ny += dy[2];
        }}

        else{
            for(int j=0; j < dist[i]; j++){
            nx += dx[2];
            ny += dy[0];
        }}
    }
    
    cout << nx << " " << ny;

    return 0;
}