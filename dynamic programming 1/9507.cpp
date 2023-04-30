#include<iostream>

using namespace std;

long long dp[68] = { 1,1,2,4, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 0, n = 0;

	for (int i = 4; i <= 67; i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];

	cin >> t;
	while (t--) {
		cin >> n;

		cout << dp[n] << '\n';
	}
	return 0;
}
