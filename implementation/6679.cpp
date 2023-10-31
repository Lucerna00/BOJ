#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 1000;i <= 9999;i++) {
		int temp = i, dec = 0, duo = 0, hex = 0;

		while (temp) {
			dec += (temp % 10);
			temp /= 10;
		}
		temp = i;
		while (temp) {
			duo += (temp % 12);
			temp /= 12;
		}
		temp = i;
		while (temp) {
			hex += (temp % 16);
			temp /= 16;
		}

		if (dec == duo && duo == hex)
			cout << i << '\n';
	}
	return 0;
}
