#include<iostream>

using namespace std;

long long dp[36] = { 1, 1, 2, 5, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;

	cin >> n;

	for (int i = 4;i <= n;i++) {
		for (int j = 0;j < i;j++)
			dp[i] += (dp[j] * dp[i - 1 - j]);
	}

	cout << dp[n];
	return 0;
}
