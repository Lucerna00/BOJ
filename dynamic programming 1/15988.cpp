#include<iostream>

using namespace std;

long long dp[1000000] = { 1,2,4, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, n = 0;

	for (int i = 3;i < 1000000;i++)
		dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;

	cin >> T;
	while (T--) {
		cin >> n;

		cout << dp[n - 1] << '\n';
	}
	return 0;
}
