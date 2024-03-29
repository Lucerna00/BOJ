#include<iostream>

using namespace std;

int dp[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 2;i <= N;i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0)
			dp[i] = (dp[i] < dp[i / 3] + 1) ? dp[i] : dp[i / 3] + 1;
		if (i % 2 == 0)
			dp[i] = (dp[i] < dp[i / 2] + 1) ? dp[i] : dp[i / 2] + 1;
	}

	cout << dp[N];
	return 0;
}