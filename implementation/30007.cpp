#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, A = 0, B = 0, X = 0;

	cin >> N;
	while (N--) {
		cin >> A >> B >> X;

		cout << A * (X - 1) + B << '\n';
	}
	return 0;
}
