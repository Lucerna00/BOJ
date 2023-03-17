#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

queue<pair<int, int>> q;
int map[8][8], N, M, clone[8][8], answer;

void dfs(int);
void bfs();

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++)
			cin >> map[i][j];
	}

	dfs(0);

	cout << answer;
	return 0;
}

void dfs(int cnt) {
	if (cnt == 3) {
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < M;j++) {
				clone[i][j] = map[i][j];
				if (clone[i][j] == 2)
					q.push({ j, i });
			}
		}
		bfs();
		cnt = 0;
		for (int k = 0;k < N;k++) {
			for (int l = 0;l < M;l++) {
				if (!clone[k][l])
					cnt++;
			}
		}
		answer = max(answer, cnt);
	}
	else {
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < M;j++) {
				if (!map[i][j]) {
					map[i][j] = 1;
					dfs(cnt + 1);
					map[i][j] = 0;
				}
			}
		}
	}
}

void bfs() {
	int dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, x = 0, y = 0, nx = 0, ny = 0;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0;i < 4;i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx >= 0 && nx < M && ny >= 0 && ny < N && !clone[ny][nx]) {
				clone[ny][nx] = 2;
				q.push({ nx, ny });
			}
		}
	}
}
