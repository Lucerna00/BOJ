#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int S = 0;

	while (cin >> S, S > 0) {
		while (true) {
			int mul = 1;

			cout << S << ' ';

			if (S < 10)
				break;
			while (S) {
				mul *= (S % 10);
				S /= 10;
			}
			S = mul;
		}

		cout << '\n';
	}
	return 0;
}
