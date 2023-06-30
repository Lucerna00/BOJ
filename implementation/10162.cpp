#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, A = 0, B = 0, C = 0;

	cin >> T;

	A = T / 300;
	T %= 300;
	B = T / 60;
	T %= 60;
	C = T / 10;
	T %= 10;

	if (T)
		cout << -1;
	else
		cout << A << " " << B << " " << C;
	return 0;
}
