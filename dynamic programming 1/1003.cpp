#include<iostream>

using namespace std;

int dp[41] = { 0, 1, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0;

	for (int i = 2;i <= 40;i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	cin >> T;
	while (T--) {
		cin >> N;

		if (N == 0)
			cout << "1 0\n";
		else if (N == 1)
			cout << "0 1\n";
		else
			cout << dp[N - 1] << " " << dp[N] << '\n';
	}
	return 0;
}
