#include<iostream>

using namespace std;

int dp[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0, X = 0, answer = 0;

	cin >> T;
	while (T--) {
		cin >> N;

		answer = -1000;
		for (int i = 1; i <= N; i++) {
			cin >> X;

			dp[i] = max(X, dp[i - 1] + X);
			answer = max(answer, dp[i]);
		}

		cout << answer << '\n';
	}
	return 0;
}
