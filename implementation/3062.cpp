#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;

	cin >> T;
	while (T--) {
		int N = 0, temp = 0, rev = 0;

		cin >> N;

		temp = N;
		while (temp) {
			rev *= 10;
			rev += (temp % 10);
			temp /= 10;
		}
		N += rev;
		temp = N;
		rev = 0;
		while (temp) {
			rev *= 10;
			rev += (temp % 10);
			temp /= 10;
		}

		cout << (N == rev ? "YES\n" : "NO\n");
	}
	return 0;
}
