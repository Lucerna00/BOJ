#include<iostream>
#include<algorithm>

using namespace std;

int dp[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 1;i <= N;i++) {
		dp[i] = i;
		for (int j = 1;j * j <= i;j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);
	}

	cout << dp[N];
	return 0;
}
