#include<iostream>
#include<set>

using namespace std;

int board[5][5], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };
set<int> s;

void dfs(int, int, int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++)
			cin >> board[i][j];
	}

	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++)
			dfs(j, i, board[i][j], 1);
	}

	cout << s.size();
	return 0;
}

void dfs(int x, int y, int sum, int cnt) {
	int nx = 0, ny = 0;

	if (cnt == 6)
		s.insert(sum);
	else {
		for (int i = 0;i < 4;i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5)
				dfs(nx, ny, sum * 10 + board[ny][nx], cnt + 1);
		}
	}
}
