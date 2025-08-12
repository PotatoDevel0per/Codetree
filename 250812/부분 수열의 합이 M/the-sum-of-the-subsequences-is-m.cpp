#include <bits/stdc++.h>

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


    for(int i = 0; i < n; i++) {
        for(int j = m; j >= a[i]; j--) {
            if(dp[j - a[i]] != INT_MAX) {
                dp[j] = min(dp[j], 1 + dp[j-a[i]]);
            }
        } 
    }

    int ans = dp[m];
    if(ans == INT_MAX)
        ans = -1;
    cout << ans;

    return 0;
}
