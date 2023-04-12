#include<iostream>
#include<algorithm>

using namespace std;

int seq[100000], dp[100000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 1;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> seq[i];

	dp[0] = 1;
	for (int i = 1;i < N;i++) {
		dp[i] = 1;
		if (seq[i] >= seq[i - 1])
			dp[i] = dp[i - 1] + 1;
		answer = max(answer, dp[i]);
	}
	dp[N - 1] = 1;
	for (int i = N - 2;i >= 0;i--) {
		dp[i] = 1;
		if (seq[i] >= seq[i + 1])
			dp[i] = dp[i + 1] + 1;
		answer = max(answer, dp[i]);
	}

	cout << answer;
	return 0;
}
