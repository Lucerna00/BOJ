#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, T = 0, t = 0, sum = 0, answer = 0;

	cin >> n >> T;
	for (int i = 1;i <= n;i++) {
		cin >> t;

		sum += t;
		if (sum <= T)
			answer = i;
		else
			break;
	}

	cout << answer;
	return 0;
}