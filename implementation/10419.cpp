#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, d = 0, answer = 0;

	cin >> T;
	while (T--) {
		cin >> d;

		answer = 0;
		while (d - answer - answer * answer >= 0)
			answer++;

		cout << answer - 1 << '\n';
	}
	return 0;
}
