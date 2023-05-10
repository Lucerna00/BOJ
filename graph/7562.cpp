#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int board[300][300], dx[8] = { 1,2,2,1,-1,-2,-2,-1 }, dy[8] = { -2,-1,1,2,2,1,-1,-2 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, I = 0, startX = 0, startY = 0, endX = 0, endY = 0;

	cin >> T;
	while (T--) {
		queue<pair<int, int>> q;

		cin >> I;
		cin >> startX >> startY;
		cin >> endX >> endY;

		fill(&board[0][0], &board[299][300], 0);
		q.push({ startX, startY });
		board[startY][startX] = 1;
		while (!q.empty()) {
			int x = q.front().first, y = q.front().second;

			q.pop();
			for (int i = 0;i < 8;i++) {
				int nx = x + dx[i], ny = y + dy[i];

				if (nx >= 0 && nx < I && ny >= 0 && ny < I && board[ny][nx] == 0) {
					q.push({ nx, ny });
					board[ny][nx] = board[y][x] + 1;
				}
			}
		}

		cout << board[endY][endX] - 1 << '\n';
	}
	return 0;
}
