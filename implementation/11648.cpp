#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;

	cin >> N;

	while (N >= 10) {
		int temp = 1;

		while (N) {
			temp *= (N % 10);
			N /= 10;
		}
		N = temp;
		answer++;
	}

	cout << answer;
	return 0;
}