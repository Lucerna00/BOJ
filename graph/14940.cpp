#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, m = 0, x = 0, y = 0, nx = 0, ny = 0;
	queue<pair<int, int>> q;

	cin >> n >> m;

	vector<vector<int>> answer(n, vector<int>(m));

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> answer[i][j];

			if (answer[i][j] == 2) {
				q.push({ j,i });
				answer[i][j] = 0;
			}
			else if (answer[i][j] == 1)
				answer[i][j] = -1;
		}
	}

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0;i < 4;i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
				if (answer[ny][nx] == -1) {
					q.push({ nx,ny });
					answer[ny][nx] = answer[y][x] + 1;
				}
			}
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++)
			cout << answer[i][j] << " ";
		cout << '\n';
	}
	return 0;
}
