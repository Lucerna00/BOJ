#include<iostream>

using namespace std;

int dp[31][31];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, k = 0;

    cin >> n >> k;

    dp[0][1] = 1;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }

    cout << dp[n - k + 1][k] << '\n';
    return 0;
}
