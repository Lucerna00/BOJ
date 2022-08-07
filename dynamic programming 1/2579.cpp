#include<iostream>
#include<algorithm>

using namespace std;

int input[301], dp[301];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;

	cin >> n;
	for (int i = 1;i <= n;i++)
		cin >> input[i];

	dp[1] = input[1];
	dp[2] = input[1] + input[2];
	for(int i=3;i<=n;i++)
		dp[i] = max(dp[i - 2], dp[i - 3] + input[i - 1]) + input[i];

	cout << dp[n];
	return 0;
}