#include<iostream>

using namespace std;

int dp[2][46];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K = 0;

    cin >> K;

    dp[0][0] = 1;
    for (int i = 1;i <= K;i++) {
        dp[0][i] = dp[1][i - 1];
        dp[1][i] = dp[0][i - 1] + dp[1][i - 1];
    }

    cout << dp[0][K] << " " << dp[1][K];
    return 0;
}
