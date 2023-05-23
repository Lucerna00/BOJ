#include<iostream>
#include<algorithm>

using namespace std;

int n, m, paper[500][500], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, cnt, temp, answer;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++)
			cin >> paper[i][j];
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (paper[i][j]) {
				cnt++;
				paper[i][j] = 0;
				temp = 1;
				dfs(j, i);
				answer = max(answer, temp);
			}
		}
	}

	cout << cnt << '\n' << answer;
	return 0;
}

void dfs(int x, int y) {
	int nx = 0, ny = 0;

	for (int i = 0;i < 4;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < m && ny >= 0 && ny < n && paper[ny][nx]) {
			paper[ny][nx] = 0;
			temp++;
			dfs(nx, ny);
		}
	}
}
