#include <iostream>
using namespace std;

int main(void) {
    char arr[26];
    for (int i = 0; i < 26; i++) { arr[i] = 0; }
    string s;
    cin >> s;

    // 97 ~ 122
    for (int i = 0; i < s.length(); i++) {
        arr[s[i] - 97]++;
    }

    for (int i : arr) {
        cout << i << ' ';
    }
}