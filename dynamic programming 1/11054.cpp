#include<iostream>
#include<algorithm>

using namespace std;

int input[1000], dp[2][1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> input[i];

	for (int i = 0;i < N;i++) {
		dp[0][i] = 1;
		for (int j = i - 1;j >= 0;j--) {
			if (input[j] < input[i])
				dp[0][i] = max(dp[0][i], dp[0][j] + 1);
		}
		for (int j = N - i;j < N;j++) {
			if (input[j] < input[N - 1 - i])
				dp[1][N - 1 - i] = max(dp[1][N - 1 - i], dp[1][j] + 1);
		}
	}
	for (int i = 0;i < N;i++)
		answer = max(answer, dp[0][i] + dp[1][i]);

	cout << answer;
	return 0;
}