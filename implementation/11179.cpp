#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;

	cin >> N;

	while (N) {
		answer = answer * 2 + N % 2;
		N /= 2;
	}

	cout << answer;
	return 0;
}
