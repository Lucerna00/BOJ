#include<iostream>
#include<algorithm>

using namespace std;

int dp[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;
	for (int i = 1;i <= N;i++) {
		cin >> dp[i];
		for (int j = 1;j <= i / 2;j++)
			dp[i] = min(dp[i], dp[j] + dp[i - j]);
	}

	cout << dp[N];
	return 0;
}
