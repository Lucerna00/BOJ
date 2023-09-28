#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;

	cin >> T;
	while (T--) {
		int score = 0, Y = 0, K = 0;

		for (int i = 0;i < 9;i++) {
			cin >> score;

			Y += score;

			cin >> score;

			K += score;
		}

		if (Y > K)
			cout << "Yonsei\n";
		else if (Y < K)
			cout << "Korea\n";
		else
			cout << "Draw\n";
	}
	return 0;
}
