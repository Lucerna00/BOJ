#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, x = 0, temp = 0, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> x;

		if (x - temp != 1)
			answer += x;
		temp = x;
	}

	cout << answer;
	return 0;
}
