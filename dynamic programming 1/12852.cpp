#include<iostream>

using namespace std;

int dp[1000001] = { 0,0,1,1, }, temp[1000001] = { 0,0,1,1, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 4;i <= N;i++) {
		dp[i] = dp[i - 1] + 1;
		temp[i] = i - 1;
		if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
			dp[i] = dp[i / 2] + 1;
			temp[i] = i / 2;
		}
		if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
			dp[i] = dp[i / 3] + 1;
			temp[i] = i / 3;
		}
	}

	cout << dp[N] << '\n';
	for (int i = N;i;i = temp[i])
		cout << i << " ";
	return 0;
}
