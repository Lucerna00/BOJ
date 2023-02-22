#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, k = 0, coin[100] = { 0, }, dp[100001] = { 0, };

	cin >> n >> k;
	for (int i = 0;i < n;i++)
		cin >> coin[i];

	for (int i = 1;i <= k;i++)
		dp[i] = 10001;
	for (int i = 0;i < n;i++) {
		for (int j = coin[i];j <= k;j++)
			dp[j] = min(dp[j], dp[j - coin[i]] + 1);
	}

	cout << (dp[k] < 10001 ? dp[k] : -1);
	return 0;
}
