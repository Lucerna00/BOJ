#include<iostream>

using namespace std;

int dp[201][201];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, K = 0;

	cin >> N >> K;

	for (int i = 1;i <= K;i++)
		dp[0][i] = 1;
	for (int i = 1;i <= N;i++) {
		for (int j = 1;j <= K;j++)
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
	}

	cout << dp[N][K];
	return 0;
}