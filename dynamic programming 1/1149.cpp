#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001][3];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;
	for (int i = 1;i <= N;i++) {
		cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
		dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
	}

	cout << min({ dp[N][0], dp[N][1], dp[N][2] });
	return 0;
}