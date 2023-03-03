#include<iostream>

using namespace std;

int coin[20], dp[10001] = { 1, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int	T = 0, N = 0, M = 0;

	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 0;i < N;i++)
			cin >> coin[i];
		cin >> M;
		for (int i = 1;i <= M;i++)
			dp[i] = 0;
		for (int i = 0;i < N;i++) {
			for (int j = coin[i];j <= M;j++)
				dp[j] += dp[j - coin[i]];
		}
		cout << dp[M] << '\n';
	}
	return 0;
}
