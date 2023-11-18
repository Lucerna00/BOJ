#include<iostream>

using namespace std;

int answer[16];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0, B = 0;

	cin >> A >> B;

	for (int i = 14;i >= 0;i -= 2) {
		answer[i] = A % 10;
		answer[i + 1] = B % 10;
		A /= 10;
		B /= 10;
	}
	for (int i = 14;i >= 1;i--) {
		for (int j = 0;j <= i;j++)
			answer[j] = (answer[j] + answer[j + 1]) % 10;
	}

	cout << answer[0] << answer[1];
	return 0;
}