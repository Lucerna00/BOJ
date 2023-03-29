#include<iostream>

using namespace std;

int dp[100001] = { 1,3, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 2;i <= N;i++)
		dp[i] = (dp[i - 2] + dp[i - 1] * 2) % 9901;

	cout << dp[N];
	return 0;
}
