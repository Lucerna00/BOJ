#include<iostream>

using namespace std;

int sheet[10000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, Q = 0, t = 0, index = 0;

	cin >> N >> Q;
	for (int i = 1;i <= N;i++) {
		cin >> t;

		while (t--)
			sheet[index++] = i;
	}
	while (Q--) {
		cin >> t;

		cout << sheet[t] << '\n';
	}
	return 0;
}