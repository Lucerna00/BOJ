#include<iostream>

using namespace std;

int map[110][110];
long long dp[110][110];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;
	dp[0][0] = 1;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cin >> map[i][j];
			if (map[i][j] && dp[i][j]) {
				dp[i + map[i][j]][j] += dp[i][j];
				dp[i][j + map[i][j]] += dp[i][j];
			}
		}
	}

	cout << dp[N - 1][N - 1];
	return 0;
}
