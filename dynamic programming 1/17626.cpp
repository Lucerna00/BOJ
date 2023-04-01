#include<iostream>
#include<algorithm>

using namespace std;

int dp[50001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;

	cin >> n;

	for (int i = 1;i <= n;i++) {
		dp[i] = dp[i - 1] + 1;
		for (int j = 2;j * j <= i;j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);
	}

	cout << dp[n];
	return 0;
}
