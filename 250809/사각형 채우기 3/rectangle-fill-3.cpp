#include <bits/stdc++.h>

using namespace std;

int n;
int D[1000];

int main() {
    cin >> n;

    // Please write your code here.
    D[0] = 1;
    D[1] = 2;

    for(int i = 2; i <= n; i++) {
        D[i] = 2 * D[i-1] + 3 * D[i-2];
    }

    cout << D[n]%1000000007;

    return 0;
}
