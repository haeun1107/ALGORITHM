#include <iostream>
using namespace std;

int main(void) {
    int n, m, x;
    int cnt = 0;
    cin >> n;

    int arr1[n];
    int arr2[1000000];
    for (int i = 0; i < 1000000; i++) { arr2[i] = 0; }

    for (int i = 0; i < n; i++) {
        cin >> m;
        arr1[i] = m;
    }

    cin >> x;

    for (int i = 0; i < n; i++) {
        arr2[arr1[i]] = 1;
        if (x-arr1[i] > 0 && x-arr1[i] <= 1000000 && arr2[x - arr1[i]] == 1 && x-arr1[i] != arr1[i]) {
            cnt++;
        }
    }

    cout << cnt;
}