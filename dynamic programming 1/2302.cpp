#include<iostream>

using namespace std;

int dp[41] = { 1,1, }, VIP[41] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, answer = 1;

	cin >> N >> M;
	for (int i = 1;i <= M;i++)
		cin >> VIP[i];

	for (int i = 2;i <= 40;i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	VIP[M + 1] = N + 1;
	for (int i = 1;i <= M + 1;i++)
		answer *= dp[VIP[i] - VIP[i - 1] - 1];

	cout << answer;
	return 0;
}
