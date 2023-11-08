#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, K = 1, answer = 0;

	cin >> N;

	while (N) {
		N -= (K++);
		if (N < K)
			K = 1;
		answer++;
	}

	cout << answer;
	return 0;
}
