#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, k = 0;

	cin >> n;
	while (n--) {
		cin >> k;

		while (k--)
			cout << '=';
		cout << '\n';
	}
	return 0;
}
