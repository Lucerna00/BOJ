#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, a = 0, b = 0, answer = 1;

	cin >> T;
	while (T--) {
		cin >> a >> b;

		b = ((b % 4) ? b % 4 : 4);
		answer = 1;
		while (b--)
			answer = (answer * a) % 10;
		if (!answer)
			answer = 10;

		cout << answer << '\n';
	}
	return 0;
}
