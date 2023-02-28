#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, box[1000] = { 0, }, dp[1000] = { 0, }, answer = 0;

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> box[i];
		dp[i] = 1;
		for (int j = 0;j < i;j++) {
			if (box[j] < box[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		answer = max(answer, dp[i]);
	}

	cout << answer;
	return 0;
}
