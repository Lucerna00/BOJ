#include<iostream>

using namespace std;

int map[51][51], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, cnt;

void dfs(int, int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, r = 0, c = 0, d = 0;

	cin >> N >> M;
	cin >> r >> c >> d;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++)
			cin >> map[i][j];
	}

	dfs(c, r, d);
	return 0;
}

void dfs(int x, int y, int d) {
	int nd = 0, nx = 0, ny = 0;

	if (!map[y][x]) {
		map[y][x] = 2;
		cnt++;
	}
	for (int i = 0;i < 4;i++) {
		nd = (d + 3 - i) % 4;
		nx = x + dx[nd];
		ny = y + dy[nd];
		if (!map[ny][nx])
			dfs(nx, ny, nd);
	}
	nd = (d + 2) % 4;
	nx = x + dx[nd];
	ny = y + dy[nd];
	if (map[ny][nx] == 1) {
		cout << cnt;
		exit(0);
	}
	dfs(nx, ny, nd);
}
