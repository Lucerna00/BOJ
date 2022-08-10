#include<iostream>

using namespace std;

int dp[101][10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;

	cin >> N;

	for (int i = 1;i < 10;i++)
		dp[1][i] = 1;

	for (int i = 2;i <= N;i++) {
		for (int j = 1;j < 9;j++)
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		dp[i][0] = dp[i - 1][1];
		dp[i][9] = dp[i - 1][8];
	}
	for (int i = 0;i < 10;i++)
		answer = (answer + dp[N][i]) % 1000000000;

	cout << answer;
	return 0;
}