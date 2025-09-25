#include <iostream>
#include <string>

using namespace std;

string A;
int dp[28];

int main() {
    cin >> A;
    int cnt = 0;
    // Please write your code here.
    for(int i = 0; i < A.length(); i++) {
        if(!dp[A[i] - 'a']) {
            cnt ++;
            dp[A[i] - 'a']++;
        }
        
    }

    if(cnt > 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}