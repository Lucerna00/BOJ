#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string dp[10001] = { "0", "1", };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;

	cin >> n;

	for (int i = 2;i <= n;i++) {
		int len = max(dp[i - 1].length(), dp[i - 2].length()), temp = 0, carry = 0;
		string result = "";
		for (int j = 0;j < len;j++) {
			temp = carry;
			if (j < dp[i - 1].length())
				temp += dp[i - 1][j] - '0';
			if (j < dp[i - 2].length())
				temp += dp[i - 2][j] - '0';
			carry = temp / 10;
			result += to_string(temp % 10);
		}
		if (carry)
			result += to_string(carry);
		dp[i] = result;
	}
	reverse(dp[n].begin(), dp[n].end());

	cout << dp[n];
	return 0;
}
