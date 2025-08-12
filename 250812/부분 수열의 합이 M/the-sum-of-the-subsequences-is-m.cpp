#include <iostream>

using namespace std;

int n, m;
int a[100];
int dp[10001];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    for(int i = 0; i <= m; i++) {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;

    for(int i = m; i > 0; i--) {
        for(int j = 0; j < n; j++) {
            if(i >= a[j]) {
                if(dp[i - a[j]] == INT_MAX)
                    continue;
                dp[i] = min(dp[i], 1 + dp[i - a[j]]);

            }
        }
    }

    int ans = dp[m];
    if(ans == INT_MAX)
        ans = -1;
    cout << ans;

    return 0;
}
