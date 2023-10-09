#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, n = 0;

	cin >> T;
	while (T--) {
		int answer = 0;

		cin >> n;

		for (int i = 1;i <= n;i++)
			answer += (i * (i + 1) * (i + 2) / 2);

		cout << answer << '\n';
	}
	return 0;
}