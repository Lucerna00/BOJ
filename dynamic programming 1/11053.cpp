#include<iostream>
#include<algorithm>

using namespace std;

int input[1000], dp[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> input[i];
		dp[i] = 1;
		for (int j = 0;j < i;j++) {
			if (input[j] < input[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		answer = max(answer, dp[i]);
	}

	cout << answer;
	return 0;
}