#include <bits/stdc++.h>

using namespace std;

int N, M;
int coin[100];
int dp[10001];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }

    // Please write your code here.
    for(int i = 0; i < 10001; i++) {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;

    for(int i = 1; i <= M; i++) {
        for(int j = 0; j < N; j++) {
            if(i >= coin[j]) {
                if(dp[i - coin[j]] == INT_MAX)
                    continue;
                
                dp[i] = min(dp[i], dp[i-coin[j]] + 1);
            }
        }
    }

    int ans = dp[M];
    if(ans == INT_MAX)
        ans = -1;
    cout << ans;

    return 0;
}
