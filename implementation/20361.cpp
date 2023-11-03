#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, X = 0, K = 0, A = 0, B = 0;

	cin >> N >> X >> K;
	while (K--) {
		cin >> A >> B;

		if (X == A)
			X = B;
		else if (X == B)
			X = A;
	}

	cout << X;
	return 0;
}
