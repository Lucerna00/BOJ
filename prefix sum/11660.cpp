#include<iostream>

using namespace std;

int matrix[1025][1025];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	cin >> N >> M;
	for (int i = 1;i <= N;i++) {
		for (int j = 1;j <= N;j++) {
			cin >> matrix[i][j];
			matrix[i][j] += matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1];
		}
	}
	while (M--) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << matrix[x2][y2] - matrix[x1 - 1][y2] - matrix[x2][y1 - 1] + matrix[x1 - 1][y1 - 1] << '\n';
	}
	return 0;
}