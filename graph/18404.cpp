#include<iostream>
#include<queue>

using namespace std;

int board[501][501], dx[8] = { -2,-2,-1,-1,1,1,2,2 }, dy[8] = { -1,1,-2,2,-2,2,-1,1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, X = 0, Y = 0, A = 0, B = 0, x = 0, y = 0, nx = 0, ny = 0;
	queue<pair<int, int>>q;

	cin >> N >> M;
	cin >> X >> Y;

	q.push({ X, Y });
	board[Y][X] = 1;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0;i < 8;i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx >= 1 && nx <= N && ny >= 1 && ny <= N && !board[ny][nx]) {
				q.push({ nx, ny });
				board[ny][nx] = board[y][x] + 1;
			}
		}
	}

	for (int i = 0;i < M;i++) {
		cin >> A >> B;

		cout << board[B][A] - 1 << '\n';
	}
	return 0;
}
