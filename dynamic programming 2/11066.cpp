#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int file[501], sum[501], dp[501][501];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, K = 0;

	cin >> T;
	while (T--) {
		cin >> K;
		for (int i = 1;i <= K;i++) {
			cin >> file[i];

			sum[i] = sum[i - 1] + file[i];
		}

		for (int i = 1;i <= K;i++) {
			for (int j = 1;j <= K - i;j++) {
				dp[j][j + i] = INT_MAX;
				for (int k = j;k < j + i;k++)
					dp[j][j + i] = min(dp[j][j + i], dp[j][k] + dp[k + 1][j + i] + sum[j + i] - sum[j - 1]);
			}
		}

		cout << dp[1][K] << '\n';
	}
	return 0;
}