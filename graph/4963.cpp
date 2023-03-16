#include<iostream>
#include<queue>

using namespace std;

int map[50][50], dx[8] = { 0,1,0,-1,-1,1,1,-1 }, dy[8] = { -1,0,1,0,-1,-1,1,1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<pair<int, int>> q;
	int w = 0, h = 0, x = 0, y = 0, nx = 0, ny = 0, answer = 0;

	while (1) {
		cin >> w >> h;
		if (!w && !h)
			break;
		for (int i = 0;i < h;i++) {
			for (int j = 0;j < w;j++)
				cin >> map[i][j];
		}

		answer = 0;
		for (int i = 0;i < h;i++) {
			for (int j = 0;j < w;j++) {
				if (map[i][j]) {
					answer++;
					q.push({ j, i });
					map[i][j] = 0;
					while (!q.empty()) {
						x = q.front().first;
						y = q.front().second;
						q.pop();
						for (int k = 0;k < 8;k++) {
							nx = x + dx[k];
							ny = y + dy[k];
							if (nx >= 0 && nx < w && ny >= 0 && ny < h && map[ny][nx]) {
								q.push({ nx, ny });
								map[ny][nx] = 0;
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
