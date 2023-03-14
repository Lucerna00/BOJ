#include<iostream>
#include<queue>

using namespace std;

int	box[1000][1000], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<pair<int, int>> q;
	int M = 0, N = 0, x = 0, y = 0, nx = 0, ny = 0, answer = 0;

	cin >> M >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			cin >> box[i][j];
			if (box[i][j] == 1)
				q.push({ j, i });
		}
	}

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int k = 0;k < 4;k++) {
			nx = x + dx[k];
			ny = y + dy[k];
			if (nx >= 0 && nx < M && ny >= 0 && ny < N && !box[ny][nx]) {
				q.push({ nx,ny });
				box[ny][nx] = box[y][x] + 1;
			}
		}
	}
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			if (!box[i][j]) {
				cout << -1;
				return 0;
			}
			answer = max(answer, box[i][j]);
		}
	}

	cout << answer - 1;
	return 0;
}
