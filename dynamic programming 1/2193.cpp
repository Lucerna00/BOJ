#include<iostream>

using namespace std;

long long dp[91] = { 0, 1, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 2;i <= N;i++)
		dp[i] = dp[i - 2] + dp[i - 1];

	cout << dp[N];
	return 0;
}
