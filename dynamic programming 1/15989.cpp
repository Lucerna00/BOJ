#include<iostream>

using namespace std;

int dp[3][10000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, n = 0;

	dp[0][0] = dp[0][1] = dp[1][1] = dp[0][2] = dp[1][2] = dp[2][2] = 1;
	for (int i = 3;i < 10000;i++) {
		dp[0][i] = dp[0][i - 1];
		dp[1][i] = dp[0][i - 2] + dp[1][i - 2];
		dp[2][i] = dp[0][i - 3] + dp[1][i - 3] + dp[2][i - 3];
	}

	cin >> T;
	while (T--) {
		cin >> n;

		cout << dp[0][n - 1] + dp[1][n - 1] + dp[2][n - 1] << '\n';
	}
	return 0;
}
