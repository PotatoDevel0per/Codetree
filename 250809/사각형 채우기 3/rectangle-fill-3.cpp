#include <bits/stdc++.h>

using namespace std;

int n;
long long D[1001];

int main() {
    cin >> n;

    // Please write your code here.
    D[0] = 1;
    D[1] = 2;

    for(int i = 2; i <= n; i++) {
        D[i] = (2 * D[i-1] + 3 * D[i-2]) % 1000000007;
        for(int j = i - 3; j >= 0; j--) {
            D[i] = (D[i] + D[j] * 2) % 1000000007;
        }
    }

    cout << D[n];

    return 0;
}
