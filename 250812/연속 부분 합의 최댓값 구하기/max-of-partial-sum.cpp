#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> dp(n, INT_MIN);
    dp[0] = arr[0];
    
    for(int i = 1; i < n; i++) {
        dp[i] = max(arr[i], dp[i-1] + arr[i]);
    }

    cout << *max_element(dp.begin(), dp.end());
    

    return 0;
}
