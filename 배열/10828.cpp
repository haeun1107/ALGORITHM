#include <iostream>
#include <vector>
using namespace std;

int stack[10000];
int ptr = 0;

void push(int dt) {
    stack[ptr++] = dt;
}

int pop() {
    if (ptr == 0) return -1;
    else return stack[--ptr];
}

int top() {
    if (ptr == 0) return -1;
    else return stack[ptr-1];
}

int size() {
    return ptr;
}

int empty() {
    if (ptr == 0) return 1;
    else return 0;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        string com;
        cin >> com;
        if (com == "push") {
            int dt;
            cin >> dt;
            push(dt);
        }
        else if (com == "top") {
            // cout << top() << endl;
            v.push_back(top());
        }
        else if (com == "size") {
            // cout << size() << endl;
            v.push_back(size());
        }
        else if (com == "empty") {
            // cout << empty() << endl;
            v.push_back(empty());
        }
        else if (com == "pop") {
            // cout << pop() << endl;
            v.push_back(pop());
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}