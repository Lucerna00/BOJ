#include<iostream>

using namespace std;

int matrix[301][301];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, K = 0, i = 0, j = 0, x = 0, y = 0;

	cin >> N >> M;
	for (int i = 1;i <= N;i++) {
		for (int j = 1;j <= M;j++) {
			cin >> matrix[i][j];

			matrix[i][j] += (matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1]);
		}
	}
	cin >> K;
	while (K--) {
		cin >> i >> j >> x >> y;

		cout << matrix[x][y] - matrix[i - 1][y] - matrix[x][j - 1] + matrix[i - 1][j - 1] << '\n';
	}
	return 0;
}
