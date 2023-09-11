#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		int n = 0, sum = 0;

		cin >> n;

		if (n == -1)
			break;
		for (int i = 1;i < n;i++) {
			if (!(n % i))
				sum += i;
		}

		if (sum == n) {
			cout << n << " = 1";
			for (int i = 2;i < n;i++) {
				if (!(n % i))
					cout << " + " << i;
			}
			cout << '\n';
		}
		else
			cout << n << " is NOT perfect.\n";
	}
	return 0;
}
