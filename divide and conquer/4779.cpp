#include<iostream>

using namespace std;

void divide(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, n = 0;

	while (true) {
		cin >> N;

		if (N == -1)
			break;
		n = 1;
		while (N--)
			n *= 3;
		divide(n, 0);
		cout << '\n';
	}
	return 0;
}

void divide(int n, int i) {
	if (n == 1)
		cout << "-";
	else {
		divide(n / 3, i);
		for (int j = i + n / 3;j < i + n / 3 * 2;j++)
			cout << " ";
		divide(n / 3, i + n / 3 * 2);
	}
}
