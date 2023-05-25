#include<iostream>
#include<queue>

using namespace std;

int board[200][200], dx[6] = { -1,1,-2,2,-1,1 }, dy[6] = { -2,-2,0,0,2,2 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, r1 = 0, c1 = 0, r2 = 0, c2 = 0, x = 0, y = 0, nx = 0, ny = 0;
	queue<pair<int, int>> q;

	cin >> N;
	cin >> r1 >> c1 >> r2 >> c2;

	q.push({ c1, r1 });
	board[r1][c1] = 1;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0;i < 6;i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx >= 0 && nx < N && ny >= 0 && ny < N && !board[ny][nx]) {
				q.push({ nx, ny });
				board[ny][nx] = board[y][x] + 1;
			}
		}
	}

	cout << board[r2][c2] - 1;
	return 0;
}
