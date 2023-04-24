#include<iostream>
#include<algorithm>

using namespace std;

int p[501], dp[501][501];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> p[i] >> p[i + 1];

	for (int l = 2;l <= N;l++) {
		for (int i = 1;i <= N - l + 1;i++) {
			int j = i + l - 1;
			dp[i][j] = 2147483647;
			for (int k = i;k < j;k++)
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j]);
		}
	}

	cout << dp[1][N];
	return 0;
}
