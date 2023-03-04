#include<iostream>

using namespace std;

int dp[1001][10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;

	cin >> N;

	for (int i = 1;i <= N;i++) {
		dp[i][0] = 1;
		for (int j = 1;j < 10;j++)
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 10007;
	}
	for (int i = 0;i < 10;i++)
		answer = (answer + dp[N][i]) % 10007;

	cout << answer;
	return 0;
}
