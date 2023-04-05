#include<iostream>

using namespace std;

int tile[4][4];

void divide(int, int, int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K = 0, x = 0, y = 0;

	cin >> K >> x >> y;

	tile[2 * K - y][x - 1] = -1;
	divide(K, 0, 0, 0);

	for (int i = 0;i < 2 * K;i++) {
		for (int j = 0;j < 2 * K;j++)
			cout << tile[i][j] << " ";
		cout << '\n';
	}
	return 0;
}

void divide(int K, int c, int r, int num) {
	if (K == 1) {
		for (int i = 0;i < 4;i++) {
			if (i != num) {
				if (num < 4 && tile[r + i / 2][c + i % 2] == -1)
					tile[r + num / 2][c + num % 2] = num + 1;
				else if (!tile[r + i / 2][c + i % 2])
					tile[r + i / 2][c + i % 2] = num + 1;
			}
		}
	}
	else {
		divide(K / 2, c + 2, r + 2, num);
		divide(K / 2, c, r + 2, num + 1);
		divide(K / 2, c + 2, r, num + 2);
		divide(K / 2, c, r, num + 3);
		divide(K / 2, c + 1, r + 1, num + 4);
	}
}
