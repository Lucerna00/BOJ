#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, n = 0, answer = 0;

	cin >> T;
	while (T--) {
		cin >> n;

		for (answer = 1;answer * answer <= n;answer++);

		cout << answer - 1 << '\n';
	}
	return 0;
}