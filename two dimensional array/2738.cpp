#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int matrix[100][100] = { 0, }, N = 0, M = 0, input = 0;

	cin >> N >> M;
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < N;j++) {
			for (int k = 0;k < M;k++) {
				if (i == 0)
					cin >> matrix[j][k];
				else {
					cin >> input;
					matrix[j][k] += input;
				}
			}
		}
	}

	for (int i = 0; i < N;i++) {
		for (int j = 0;j < M;j++)
			cout << matrix[i][j] << " ";
		cout << '\n';
	}
	return 0;
}
