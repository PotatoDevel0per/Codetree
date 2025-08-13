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
    vector<vector<int>> dp(n+1, vector<int>(3, 0));
    
    dp[1][1] = coin[1];  // 1번째 계단은 1계단으로만 갈 수 있음
    
    if (n >= 2) {
        dp[2][0] = coin[2];           // 0→2 (2계단으로)
        dp[2][2] = coin[1] + coin[2]; // 0→1→2 (1계단 2번)
    }

    for(int i = 3; i <= n; i++) {
        // 2계단으로 도달 (이전에 몇 계단이든 상관없음)
        dp[i][0] = max({dp[i-2][0], dp[i-2][1], dp[i-2][2]}) + coin[i];
        
        // 1계단으로 도달 (이전이 2계단이어야 함)
        dp[i][1] = dp[i-1][0] + coin[i];
        
        // 1계단으로 2번째 연속 도달 (이전이 1계단 1번이어야 함)
        dp[i][2] = dp[i-1][1] + coin[i];
    }
    
    cout << max({dp[n][0], dp[n][1], dp[n][2]});
    
    return 0;
}