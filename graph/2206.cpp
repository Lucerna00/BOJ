#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, x = 0, y = 0, block = 0, nx = 0, ny = 0;
	queue<pair<pair<int, int>, int>> q;

	cin >> N >> M;

	vector<vector<char>> map(N, vector<char>(M, 0));
	vector<vector<vector<int>>> visited(N, vector<vector<int>>(M, vector<int>(2, 0)));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			cin >> map[i][j];
	}

	visited[0][0][0] = 1;
	q.push({ { 0, 0 }, 0 });
	while (!q.empty()) {
		x = q.front().first.first;
		y = q.front().first.second;
		block = q.front().second;

		if (x == M - 1 && y == N - 1) {
			cout << visited[y][x][block];
			return 0;
		}

		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
				if (map[ny][nx] == '0' && !visited[ny][nx][block]) {
					visited[ny][nx][block] = visited[y][x][block] + 1;
					q.push({ {nx, ny}, block });
				}
				else if (map[ny][nx] == '1' && !block && !visited[ny][nx][1]) {
					visited[ny][nx][1] = visited[y][x][0] + 1;
					q.push({ {nx, ny}, 1 });
				}
			}
		}
	}

	cout << -1;
	return 0;
}
