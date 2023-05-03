#include<iostream>
#include<algorithm>

using namespace std;

int soldier[2000], dp[2000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> soldier[i];

		dp[i] = 1;
		for (int j = 0;j < i;j++) {
			if (soldier[i] < soldier[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		answer = max(answer, dp[i]);
	}

	cout << N - answer;
	return 0;
}
