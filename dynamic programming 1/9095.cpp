#include<iostream>

using namespace std;

int dp[11] = { 0,1,2,4, };

int DP(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, n = 0;

	cin >> T;
	for (int i = 0;i < T;i++) {
		cin >> n;
		cout << DP(n) << '\n';
	}
	return 0;
}

int DP(int n) {
	if (dp[n])
		return dp[n];
	return dp[n] = DP(n - 1) + DP(n - 2) + DP(n - 3);
}
