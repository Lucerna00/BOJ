#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, k = 0, answer = 0;

	while (cin >> n >> k) {
		answer = n;
		while (n >= k) {
			answer += (n / k);
			n = (n / k) + (n % k);
		}

		cout << answer << '\n';
	}
	return 0;
}
