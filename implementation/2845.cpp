#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int L = 0, P = 0, cnt = 0;

	cin >> L >> P;
	for (int i = 0;i < 5;i++) {
		cin >> cnt;

		cout << cnt - L * P << " ";
	}
	return 0;
}
