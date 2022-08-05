#include<iostream>

using namespace std;

int dp[1000001] = { 1,1, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 2;i <= N;i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;

	cout << dp[N];
	return 0;
}