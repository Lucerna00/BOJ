#include<iostream>

using namespace std;

long long dp[81] = { 0,1,1,2,3,5,8, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 6;i <= N;i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	cout << dp[N] * 2 + (dp[N] + dp[N - 1]) * 2;
	return 0;
}
