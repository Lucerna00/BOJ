#include<iostream>
#include<algorithm>

using namespace std;

int T[16], P[16], dp[16];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;

	cin >> N;
	for (int i = 1;i <= N;i++) {
		cin >> T[i] >> P[i];

		dp[i] = max(dp[i], dp[i - 1]);
		if (i + T[i] - 1 <= N)
			dp[i + T[i] - 1] = max(dp[i + T[i] - 1], dp[i - 1] + P[i]);
	}

	cout << dp[N];
	return 0;
}
