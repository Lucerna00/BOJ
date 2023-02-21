#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, k = 0, coin[100] = { 0, }, dp[100001] = { 1, };

	cin >> n >> k;
	for (int i = 0;i < n;i++)
		cin >> coin[i];

	for (int i = 0;i < n;i++) {
		for (int j = coin[i];j <= k;j++)
			dp[j] += dp[j - coin[i]];
	}

	cout << dp[k];
	return 0;
}
