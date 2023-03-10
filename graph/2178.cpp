#include<iostream>
#include<queue>

using namespace std;

queue<pair<int, int>> q;
char maze[100][100];
int dist[100][100];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, x = 0, y = 0, nx = 0, ny = 0;

	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++)
			cin >> maze[i][j];
	}

	q.push(make_pair(0, 0));
	maze[0][0] = '0';
	dist[0][0] = 1;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0;i < 4;i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx >= 0 && nx < M && ny >= 0 && ny < N && maze[ny][nx] == '1') {
				q.push(make_pair(nx, ny));
				maze[ny][nx] = '0';
				dist[ny][nx] = dist[y][x] + 1;
			}
		}
	}

	cout << dist[N - 1][M - 1];
	return 0;
}
