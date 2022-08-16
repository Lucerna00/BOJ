#include<iostream>
#include<algorithm>

using namespace std;

int input[500], dp[500];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, temp = 0, range = 0, LISLen = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		cin >> input[temp - 1];
		range = max(range, temp);
	}

	for (int i = 0; i < range; i++) {
		if (input[i]) {
			dp[i] = 1;
			for (int j = 0; j < i; j++) {
				if (input[j] && (input[j] < input[i]))
					dp[i] = max(dp[i], dp[j] + 1);
			}
			LISLen = max(LISLen, dp[i]);
		}
	}

	cout << n - LISLen;
	return 0;
}
