#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int dp[1001][1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len1 = 0, len2 = 0;
	string s1, s2;

	cin >> s1 >> s2;

	len1 = s1.length();
	len2 = s2.length();
	for (int i = 1;i <= len2;i++) {
		for (int j = 1;j <= len1;j++)
			dp[i][j] = max({ (dp[i - 1][j - 1] + (s1[j - 1] == s2[i - 1])), dp[i - 1][j], dp[i][j - 1] });
	}

	cout << dp[len2][len1];
	return 0;
}