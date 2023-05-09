#include<iostream>
#include<algorithm>

using namespace std;

int N, region[100][100], temp[100][100], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, answer = 1;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cin >> region[i][j];

			h = max(h, region[i][j]);
		}
	}

	for (int i = 1;i <= h;i++) {
		int cnt = 0;

		for (int j = 0;j < N;j++) {
			for (int k = 0;k < N;k++) {
				if (region[j][k] <= i)
					temp[j][k] = 1;
				else
					temp[j][k] = 0;
			}
		}
		for (int j = 0;j < N;j++) {
			for (int k = 0;k < N;k++) {
				if (temp[j][k] == 0) {
					cnt++;
					temp[j][k] = 1;
					dfs(k, j);
				}
			}
		}
		answer = max(answer, cnt);
	}

	cout << answer;
	return 0;
}

void dfs(int x, int y) {
	int nx = 0, ny = 0;

	for (int i = 0;i < 4;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < N && ny >= 0 && ny < N && temp[ny][nx] == 0) {
			temp[ny][nx] = 1;
			dfs(nx, ny);
		}
	}
}