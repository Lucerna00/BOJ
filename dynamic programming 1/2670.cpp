#include<iostream>
#include<algorithm>

using namespace std;

double num[10001], dp[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	double answer = 0;

	cin >> N;
	for (int i = 1;i <= N;i++) {
		cin >> num[i];

		dp[i] = max(num[i], dp[i - 1] * num[i]);
		answer = max(answer, dp[i]);
	}

	cout << fixed;
	cout.precision(3);
	cout << answer;
	return 0;
}
