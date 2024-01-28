#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
    queue<int> Q;
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        string com;
        cin >> com;
        if (com == "push") {
            int dt;
            cin >> dt;
            Q.push(dt);
        }
        else if (com == "front") {
            if (!Q.empty()) v.push_back(Q.front());
            else v.push_back(-1);
        }
        else if (com == "size") {
            v.push_back(Q.size());
        }
        else if (com == "empty") {
            v.push_back(Q.empty());
        }
        else if (com == "pop") {
            if (!Q.empty()) {
                v.push_back(Q.front());
                Q.pop();
            }
            else v.push_back(-1);
        }
        else {
            if (!Q.empty()) v.push_back(Q.back());
            else v.push_back(-1);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}