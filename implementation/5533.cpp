#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int players[200][3] = { 0, }, checked[3][101] = { 0, };
	int N = 0, sum = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < 3;j++) {
			cin >> players[i][j];

			checked[j][players[i][j]]++;
		}
	}

	for (int i = 0;i < N;i++) {
		sum = 0;
		for (int j = 0;j < 3;j++) {
			if (checked[j][players[i][j]] == 1)
				sum += players[i][j];
		}

		cout << sum << '\n';
	}
	return 0;
}
