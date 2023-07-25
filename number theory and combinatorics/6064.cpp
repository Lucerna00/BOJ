#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool flag = false;
	int T = 0, M = 0, N = 0, x = 0, y = 0, k = 1;

	cin >> T;
	while (T--) {
		cin >> M >> N >> x >> y;

		flag = false;
		k = x;
		while (k <= M * N) {
			if (x == y) {
				flag = true;
				break;
			}
			if (x < y) {
				x += M;
				k = x;
			}
			else {
				y += N;
				k = y;
			}
		}

		if (flag)
			cout << k << '\n';
		else
			cout << -1 << '\n';
	}
	return 0;
}
