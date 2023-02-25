#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, A[1001] = { 0, }, dp[1001] = { 0, }, answer = 0, temp = 0, list[1001] = { 0, };

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> A[i];
		dp[i] = 1;
		for (int j = 0;j < i;j++) {
			if (A[j] < A[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		answer = max(answer, dp[i]);
	}

	temp = answer;
	for (int i = N - 1;i >= 0 && temp;i--) {
		if (dp[i] == temp)
			list[--temp] = A[i];
	}

	cout << answer << '\n';
	for (int i = 0;i < answer;i++)
		cout << list[i] << " ";
	return 0;
}
