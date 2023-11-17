#include<iostream>

using namespace std;

int answer[7];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0, B = 0, i = 0;

	cin >> A >> B;

	for (;i < 7;i++) {
		answer[i] = (A % 10 + B % 10);
		A /= 10;
		B /= 10;
		if (A == 0 && B == 0)
			break;
	}

	for (;i >= 0;i--)
		cout << answer[i];
	return 0;
}