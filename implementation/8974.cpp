#include<iostream>

using namespace std;

int dp[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int index = 0, A = 0, B = 0, answer = 0;

	for (int i = 1;i < 46;i++) {
		for (int j = 0;j < i && index < 1000;j++)
			dp[index++] = i;
	}

	cin >> A >> B;

	for (int i = A - 1;i < B;i++)
		answer += dp[i];

	cout << answer;
	return 0;
}