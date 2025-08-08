#include <bits/stdc++.h>

using namespace std;

int n;
int grid[100][100];
int D[100][100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    D[0][0] = grid[0][0];
    for(int i = 1; i < n; i++) {
        D[i][0] = D[i-1][0] + grid[i][0];
        D[0][i] = D[0][i-1] + grid[0][i];
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            D[i][j] = max(D[i-1][j], D[i][j-1]) + grid[i][j];
        }
    }

    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        ans = max(ans, D[n-1][i]);
    }

    cout << ans;

    return 0;
}
