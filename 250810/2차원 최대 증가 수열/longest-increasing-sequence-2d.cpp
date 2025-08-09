#include <iostream>

using namespace std;

int n, m;
int grid[50][50];
int dp[50][50];

int jump(int r, int c){
    if(dp[r][c] != 0) return dp[r][c];

    dp[r][c] = 1;
    
    if(r + 1 < n || c + 1 < m) {
        for(int i = r+1; i < n; i ++) {
            for(int j = c+1; j < m; j++) {
                if(grid[r][c] < grid[i][j]) {
                    dp[r][c] = max(dp[r][c], 1 + jump(i,j));
                }
            }
        }
    }
    return dp[r][c];
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            jump(i,j);
        }
    }

    cout << dp[0][0];

    return 0;
}
