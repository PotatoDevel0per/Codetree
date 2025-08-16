#include <bits/stdc++.h>

using namespace std;

int N, M;
int s[200], e[200], v[200];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> s[i] >> e[i] >> v[i];
    }

    // Please write your code here.
    vector<vector<int>> dp(M+1, vector<int>(N, INT_MIN));
    // dp[i]][j] = 만족도의 합 
    for(int i = 0; i < N; i++){
        if(s[i] == 1)
            dp[1][i] = 0;
    }

    for(int i = 1; i <= M; i++) { //day
        for(int j = 0; j < N; j++){ //현재 옷
            if(i >= s[j] && i <= e[j]) { //옷을 입을 수 있는 날인지 
                for(int k = 0; k < N; k++) { //전날 옷
                    dp[i][j] = max(dp[i][j], dp[i-1][k] + abs(v[j] - v[k]));
                }
            }
        }
    }

    // cout << "**************" << endl;
    // for (int i = 1; i <= M; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "**************" << endl
    //      << endl
    //      << endl;

    int ans = INT_MIN;
    for(int satis : dp[M]) {
        ans = max(ans, satis);
    }

    cout << ans;

    return 0;
}

// 5 5 10
// 5 10 10