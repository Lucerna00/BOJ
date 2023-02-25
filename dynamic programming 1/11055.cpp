#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, A[1001] = { 0, }, dp[1001] = { 0, }, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> A[i];
		dp[i] = A[i];
		for (int j = 0;j < i;j++) {
			if (A[j] < A[i])
				dp[i] = max(dp[i], dp[j] + A[i]);
		}
		answer = max(answer, dp[i]);
	}

	cout << answer;
	return 0;
}
