#include <bits/stdc++.h>
using namespace std;

int n;
int coin[1001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> coin[i];
    }

    // dp[i][j] = i번째 계단에서 연속으로 j번 1계단으로 올라온 상태의 최대 동전
    // j=0: 2계단으로 도달, j=1: 1계단 1번, j=2: 1계단 2번 연속
    vector<vector<int>> dp(n+1, vector<int>(4, 0));
    
    dp[1][1] = coin[1];  // 1번째 계단은 1계단으로만 갈 수 있음
    
    dp[2][0] = coin[2];           // 0→2 (2계단으로)
    dp[2][2] = coin[1] + coin[2]; // 0→1→2 (1계단 2번)

    for(int i = 3; i <= n; i++) {
        for(int j = 0; j <= 3; j++) {
            if(dp[i-2][j] != 0) {
                dp[i][j] = max(dp[i][j], dp[i-2][j] + coin[i]);
            }
            if(j && dp[i-1][j-1] != 0) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + coin[i]);
            }
        }
    }
    
    cout << max({dp[n][0], dp[n][1], dp[n][2], dp[n][3]});
    
    return 0;
}