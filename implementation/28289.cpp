#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int P = 0, G = 0, C = 0, N = 0, a = 0, b = 0, c = 0, d = 0;

	cin >> P;
	while (P--) {
		cin >> G >> C >> N;

		if (G == 1)
			d++;
		else if (C <= 2)
			a++;
		else if (C == 3)
			b++;
		else
			c++;
	}

	cout << a << '\n' << b << '\n' << c << '\n' << d;
	return 0;
}
