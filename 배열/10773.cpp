#include <iostream>
using namespace std;

int stack[100000];
int ptr = 0;

void push(int dt) {
    if (ptr < 100000) stack[ptr++] = dt;
}

int pop() {
    if (ptr == 0) return -1;
    else return stack[--ptr];
}

int size() {
    return ptr;
}

int main(void) {
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num != 0) push(num);
        else pop();
    }
    
    for (int i = 0; i < size(); i++) {
        sum += stack[i];
    }
    cout << sum;
}