#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, n = 0;

	cin >> T;
	while (T--) {
		cin >> n;

		cout << "Pairs for " << n << ": ";
		for (int i = 1;i < (n + 1) / 2;i++) {
			if (i > 1)
				cout << ", ";
			cout << i << " " << n - i;
		}
		cout << '\n';
	}
	return 0;
}
