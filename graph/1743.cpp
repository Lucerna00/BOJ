#include<iostream>
#include<algorithm>

using namespace std;

int N, M, K, floor[100][100], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, cnt;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int r = 0, c = 0, answer = 0;

	cin >> N >> M >> K;
	for (int i = 0;i < K;i++) {
		cin >> r >> c;

		floor[r - 1][c - 1] = 1;
	}

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			if (floor[i][j]) {
				floor[i][j] = 0;
				cnt = 1;
				dfs(j, i);
				answer = max(answer, cnt);
			}
		}
	}

	cout << answer;
	return 0;
}

void dfs(int x, int y) {
	int nx = 0, ny = 0;

	for (int i = 0;i < 4;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < M && ny >= 0 && ny < N && floor[ny][nx]) {
			floor[ny][nx] = 0;
			cnt++;
			dfs(nx, ny);
		}
	}
}
