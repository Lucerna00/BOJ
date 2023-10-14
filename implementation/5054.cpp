#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0;

	cin >> T;
	while (T--) {
		int x = 0, max_x = 0, min_x = 100;

		cin >> N;

		for (int i = 0;i < N;i++) {
			cin >> x;

			max_x = max(max_x, x);
			min_x = min(min_x, x);
		}

		cout << (max_x - min_x) * 2 << '\n';
	}
	return 0;
}
