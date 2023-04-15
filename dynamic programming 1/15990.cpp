#include<iostream>

using namespace std;

long long dp[3][100000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, n = 0;

	dp[0][0] = dp[1][1] = dp[0][2] = dp[1][2] = dp[2][2] = 1;
	for (int i = 3;i < 100000;i++) {
		dp[0][i] = (dp[1][i - 1] + dp[2][i - 1]) % 1000000009;
		dp[1][i] = (dp[0][i - 2] + dp[2][i - 2]) % 1000000009;
		dp[2][i] = (dp[0][i - 3] + dp[1][i - 3]) % 1000000009;
	}

	cin >> T;
	while (T--) {
		cin >> n;

		cout << (dp[0][n - 1] + dp[1][n - 1] + dp[2][n - 1]) % 1000000009 << '\n';
	}
	return 0;
}
