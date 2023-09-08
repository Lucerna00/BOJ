#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0, num = 0, answer = 0;

	cin >> T;
	while (T--) {
		cin >> N;

		answer = 0;
		while (N--) {
			cin >> num;

			answer += num;
		}

		cout << answer << '\n';
	}
	return 0;
}
