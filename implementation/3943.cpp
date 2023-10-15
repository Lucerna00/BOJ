#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, n = 0;

	cin >> T;
	while (T--) {
		int answer = 1;

		cin >> n;

		while (n != 1) {
			answer = max(answer, n);
			n = (n % 2 == 0 ? n / 2 : n * 3 + 1);
		}

		cout << answer << '\n';
	}
	return 0;
}
