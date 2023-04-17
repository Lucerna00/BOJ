#include<iostream>

using namespace std;

int dp[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	dp[0] = 1;
	dp[1] = 2;
	for (int i = 2;i < N;i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;

	cout << dp[N - 1];
	return 0;
}
