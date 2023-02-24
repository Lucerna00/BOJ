#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, A[1000] = { 0, }, dp[1000] = { 1, }, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> A[i];
		dp[i] = 1;
		for (int j = 0;j < i;j++) {
			if (A[i] < A[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		answer = max(answer, dp[i]);
	}

	cout << answer;
	return 0;
}
