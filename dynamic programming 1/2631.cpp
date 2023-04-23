#include<iostream>
#include<algorithm>

using namespace std;

int child[200], dp[200];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 200;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> child[i];

		dp[i] = 1;
		for (int j = 0;j < i;j++) {
			if (child[i] > child[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		answer = min(answer, N - dp[i]);
	}

	cout << answer;
	return 0;
}
