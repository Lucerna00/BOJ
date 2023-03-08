#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0, B = 0, answer = 1;

	cin >> A >> B;

	while (A < B) {
		if (B % 2 == 0) {
			B /= 2;
			answer++;
		}
		else if (B % 10 == 1) {
			B /= 10;
			answer++;
		}
		else {
			cout << -1;
			return 0;
		}
		if (A > B) {
			cout << -1;
			return 0;
		}
	}
	cout << answer;
	return 0;
}
