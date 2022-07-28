#include<iostream>

using namespace std;

int gcd(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, A = 0, B = 0, d = 0;

	cin >> N >> A;
	for (int i = 0;i < N - 1;i++) {
		cin >> B;
		d = gcd(A, B);
		cout << A / d << '/' << B / d << '\n';
	}
	return 0;
}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}