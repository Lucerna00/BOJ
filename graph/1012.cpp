#include<iostream>
#include<queue>

using namespace std;

int matrix[51][51], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<pair<int, int>> q;
	int T = 0, M = 0, N = 0, K = 0, x = 0, y = 0, nx = 0, ny = 0, answer = 0;

	cin >> T;
	while (T--) {
		cin >> M >> N >> K;
		for (int i = 0;i < K;i++) {
			cin >> x >> y;
			matrix[y][x] = 1;
		}

		answer = 0;
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < M;j++) {
				if (matrix[i][j]) {
					answer++;
					q.push({ j, i });
					matrix[i][j] = 0;
					while (!q.empty()) {
						x = q.front().first;
						y = q.front().second;
						q.pop();
						for (int k = 0;k < 4;k++) {
							nx = x + dx[k];
							ny = y + dy[k];
							if (nx >= 0 && nx < M && ny >= 0 && ny < N && matrix[ny][nx]) {
								q.push({ nx, ny });
								matrix[ny][nx] = 0;
							}
						}
					}
				}
			}
		}

		cout << answer << '\n';
	}
	return 0;
}
