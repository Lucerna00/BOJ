#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, count = 1, N = 0, M = 0;

	cin >> T;
	while (T--) {
		count = 1;
		cin >> N >> M;
		for (int i = 0;i < N;i++) {
			count *= M--;
			count /= (i + 1);
		}
		cout << count << '\n';
	}
	return 0;
}