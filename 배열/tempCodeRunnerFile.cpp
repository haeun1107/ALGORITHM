#include <iostream>
#include <list>
using namespace std;

int main(void) {
    string s;
    list<char> L;
    cin >> s;
    for (char c : s) L.push_back(c);

    list<char>::iterator iter = L.end();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char com;
        cin >> com;
        if (com == 'P') {
            char plus;
            cin >> plus;
            L.insert(iter, plus);
        }
        else if (com == 'L') {
            if (iter != L.begin()) iter--;
        }
        else if (com == 'D') {
            if (iter != L.end()) iter++;
        }
        else {
            if (iter != L.begin()) {
                iter--;
                L.erase(iter);
            }
        }
    }
    for (char c : L) cout << c; 
}