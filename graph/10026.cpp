#include<iostream>
#include<vector>

using namespace std;

int N, dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };
vector<vector<char>> painting, weakPainting;

void dfs(vector<vector<char>>&, int, int, char);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int pCnt = 0, wCnt = 0;

	cin >> N;

	painting.resize(N, vector<char>(N));
	weakPainting.resize(N, vector<char>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> painting[i][j];

			weakPainting[i][j] = painting[i][j];
			if (weakPainting[i][j] == 'G')
				weakPainting[i][j] = 'R';
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (painting[i][j] != 'X') {
				pCnt++;
				dfs(painting, j, i, painting[i][j]);
			}
			if (weakPainting[i][j] != 'X') {
				wCnt++;
				dfs(weakPainting, j, i, weakPainting[i][j]);
			}
		}
	}

	cout << pCnt << " " << wCnt;
	return 0;
}

void dfs(vector<vector<char>>& painting, int x, int y, char color) {
	int nx = 0, ny = 0;

	painting[y][x] = 'X';
	for (int i = 0; i < 4; i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < N && ny >= 0 && ny < N && painting[ny][nx] == color)
			dfs(painting, nx, ny, color);
	}
}
