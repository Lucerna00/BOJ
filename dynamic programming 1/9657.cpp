#include<iostream>
#include<algorithm>

using namespace std;

int dp[1000] = { 1, 0, 1, 1, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 4;i < N;i++) {
		if (min({ dp[i - 1],dp[i - 3], dp[i - 4] }) == 1)
			dp[i] = 0;
		else
			dp[i] = 1;
	}

	if (dp[N - 1] == 1)
		cout << "SK";
	else
		cout << "CY";
	return 0;
}
