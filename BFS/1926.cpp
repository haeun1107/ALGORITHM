#include <iostream>
using namespace std;

int queue[250000][2];
int head = 0;
int tail = 0;

void push(int x, int y) {
    queue[tail][0] = x;
    queue[tail][1] = y;
    tail++;
}

pair<int, int> pop() {
    if (head >= 0) {
        return {queue[head][0], queue[head++][1]};
    }
    return {-1, -1};
}

int main(void) {
    int n, m, num;
    cin >> n >> m;
    int arr[n][m];
    int visited[n][m];
    int dx[4] = {-1, 1, 0, 0}; // 상하좌우
    int dy[4] = {0, 0, -1, +1}; // 상하좌우
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            arr[i][j] = num;
            visited[i][j] = 0;
        }
    }
    
    int pi, pj, ki, kj;
    int cnt, max_cnt, max_size = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1 && visited[i][j] == 0) {
                push(i,j);
                max_cnt = 1;
                while (head != tail) {
                    pair<int, int> coord = pop();
                    pi = coord.first;
                    pj = coord.second;
                    visited[pi][pj] = 1;
                    for (int k = 0; k < 4; k++) {
                        ki = pi + dx[k];
                        kj = pj + dy[k];
                        if (ki == n || ki == -1 || kj == m || kj == -1) continue;
                        if (arr[ki][kj] == 1 && visited[ki][kj] == 0) {
                            visited[ki][kj] = 1;
                            push(ki, kj);
                            max_cnt++;
                        }
                    }
                }
                if (max_size < max_cnt) max_size = max_cnt;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    cout << max_size << endl;
}