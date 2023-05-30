#include <iostream>

using namespace std;

char yard[250][250];
int R, C, dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, sheepCnt, wolfCnt, sheepAns, wolfAns;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> R >> C;
	for (int i = 0;i < R;i++)
		cin >> yard[i];

	for (int i = 0;i < R;i++) {
		for (int j = 0;j < C;j++) {
			if (yard[i][j] != '#') {
				sheepCnt = 0;
				wolfCnt = 0;
				if (yard[i][j] == 'o')
					sheepCnt++;
				else if (yard[i][j] == 'v')
					wolfCnt++;
				yard[i][j] = '#';
				dfs(j, i);
				if (sheepCnt > wolfCnt)
					sheepAns += sheepCnt;
				else
					wolfAns += wolfCnt;
			}
		}
	}

	cout << sheepAns << " " << wolfAns;
	return 0;
}

void dfs(int x, int y) {
	int nx = 0, ny = 0;

	for (int i = 0;i < 4;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < C && ny >= 0 && ny < R && yard[ny][nx] != '#') {
			if (yard[ny][nx] == 'o')
				sheepCnt++;
			else if (yard[ny][nx] == 'v')
				wolfCnt++;
			yard[ny][nx] = '#';
			dfs(nx, ny);
		}
	}
}
