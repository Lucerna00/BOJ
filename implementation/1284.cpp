#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 1;

	while (cin >> N, N) {
		answer = 1;
		while (N) {
			if (N % 10 == 1)
				answer += 3;
			else if (N % 10 == 0)
				answer += 5;
			else
				answer += 4;
			N /= 10;
		}

		cout << answer << '\n';
	}
	return 0;
}
