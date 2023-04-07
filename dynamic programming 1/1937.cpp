#include<iostream>
#include<algorithm>

using namespace std;

int n, map[500][500], dp[500][500], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };

int dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = 0;

	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++)
			cin >> map[i][j];
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++)
			answer = max(answer, dfs(j, i));
	}

	cout << answer;
	return 0;
}

int dfs(int x, int y) {
	if (dp[y][x])
		return dp[y][x];
	dp[y][x] = 1;
	for (int i = 0;i < 4;i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < n && map[y][x] < map[ny][nx])
			dp[y][x] = max(dp[y][x], dfs(nx, ny) + 1);
	}
	return dp[y][x];
}
