#include <bits/stdc++.h>

using namespace std;

int n;
int grid[500][500];
int dp[500][500];

int dfs(int r, int c) {
    if(dp[r][c] != 0)
        return dp[r][c];
    
    dp[r][c] = 1;
    
    if(r - 1 >= 0 && grid[r][c] < grid[r-1][c]){
        dp[r][c] = max(dp[r][c], 1 + dfs(r-1, c));
    }
    
    if (r + 1 < n && grid[r][c] < grid[r+1][c]) {
        dp[r][c] = max(dp[r][c], 1 + dfs(r+1, c));
    }

    if (c - 1 >= 0 && grid[r][c] < grid[r][c-1]) {
        dp[r][c] = max(dp[r][c], 1 + dfs(r, c-1));
    }

    if (c + 1 < n && grid[r][c] < grid[r][c+1]) {
        dp[r][c] = max(dp[r][c], 1 + dfs(r, c+1));
    }

    return dp[r][c];
}

void printArr() {
    cout << "*******************" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "*******************" << endl;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            dfs(i, j);
        }
    }

    //printArr();

    int ans = INT_MIN;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans = max(ans, dp[i][j]);
        }
    }

    cout << ans;

    return 0;
}