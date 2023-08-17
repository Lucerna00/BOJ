#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int R, C, dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, answer;
vector<vector<char>> board;

void dfs(int, int, int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> R >> C;

	board.resize(R, vector<char>(C));

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++)
			cin >> board[i][j];
	}

	dfs(0, 0, 1, 1 << (board[0][0] - 'A'));

	cout << answer;
	return 0;
}

void dfs(int x, int y, int cnt, int mask) {
	int nx = 0, ny = 0;

	if (answer == 26)
		return;
	answer = max(answer, cnt);
	for (int i = 0; i < 4; i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < C && ny >= 0 && ny < R) {
			if (!(mask & 1 << (board[ny][nx] - 'A')))
				dfs(nx, ny, cnt + 1, mask | 1 << (board[ny][nx] - 'A'));
		}
	}
}
