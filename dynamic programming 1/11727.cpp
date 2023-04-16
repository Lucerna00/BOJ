#include<iostream>

using namespace std;

int dp[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;

	cin >> n;

	dp[0] = 1;
	dp[1] = 3;
	for (int i = 2;i < n;i++)
		dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;

	cout << dp[n - 1];
	return 0;
}
