#include<iostream>

using namespace std;

int N, M, dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, whiteCnt, BlueCnt, whiteAns, BlueAns;
char battle[100][100];

void dfs(char, int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0;i < M;i++)
		cin >> battle[i];

	for (int i = 0;i < M;i++) {
		for (int j = 0;j < N;j++) {
			if (battle[i][j] == 'W') {
				whiteCnt = 1;
				battle[i][j] = 0;
				dfs('W', j, i);
				whiteAns += (whiteCnt * whiteCnt);
			}
			else if (battle[i][j] == 'B') {
				BlueCnt = 1;
				battle[i][j] = 0;
				dfs('B', j, i);
				BlueAns += (BlueCnt * BlueCnt);
			}
		}
	}

	cout << whiteAns << " " << BlueAns;
	return 0;
}

void dfs(char color, int x, int y) {
	int nx = 0, ny = 0;

	for (int i = 0;i < 4;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < N && ny >= 0 && ny < M && battle[ny][nx] == color) {
			if (color == 'W')
				whiteCnt++;
			else
				BlueCnt++;
			battle[ny][nx] = 0;
			dfs(color, nx, ny);
		}
	}
}
