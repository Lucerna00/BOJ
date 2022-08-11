#include<iostream>
#include<algorithm>

using namespace std;

int dp[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, answer = -1000;

	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> dp[i];
		dp[i] = max(dp[i] + dp[i - 1], dp[i]);
		answer = max(answer, dp[i]);
	}

	cout << answer;
	return 0;
}