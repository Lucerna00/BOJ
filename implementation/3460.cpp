#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, n = 0, index = 0;

	cin >> T;
	while (T--) {
		cin >> n;

		index = 0;
		while (n) {
			if (n % 2)
				cout << index << " ";
			n /= 2;
			index++;
		}
	}
	return 0;
}
