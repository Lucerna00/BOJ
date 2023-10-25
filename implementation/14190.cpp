#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, temp = -1000000;

	while (cin >> n) {
		if (temp > n) {
			cout << "Bad";
			return 0;
		}
		temp = n;
	}

	cout << "Good";
	return 0;
}
