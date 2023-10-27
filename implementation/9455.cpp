#include<iostream>

using namespace std;

int grid[101][101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;

	cin >> T;
	while (T--) {
		int m = 0, n = 0, answer = 0;

		cin >> m >> n;
		for (int i = 0;i < m;i++) {
			for (int j = 0;j < n;j++)
				cin >> grid[i][j];
		}

		for (int i = 0;i < n;i++) {
			for (int j = 0;j < m;j++) {
				if (grid[j][i]) {
					for (int k = j + 1;k < m;k++) {
						if (!grid[k][i])
							answer++;
					}
				}
			}
		}

		cout << answer << '\n';
	}
	return 0;
}
