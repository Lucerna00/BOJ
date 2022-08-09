#include<iostream>
#include<algorithm>

using namespace std;

int dp[500][500];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, answer = 0;

	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j <= i;j++)
			cin >> dp[i][j];
	}

	for (int i = n - 1;i > 0;i--) {
		for (int j = 0;j < i;j++)
			dp[i - 1][j] += max(dp[i][j], dp[i][j + 1]);
	}

	cout << dp[0][0];
	return 0;
}