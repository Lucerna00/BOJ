#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int dx[6] = { 0,1,0,-1,0,0 }, dy[6] = { -1,0,1,0,0 }, dz[6] = { 0,0,0,0,-1,1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M = 0, N = 0, H = 0, cnt = 0, x = 0, y = 0, z = 0, nx = 0, ny = 0, nz = 0, answer = 0;
	queue<pair<pair<int, int>, int>> q;

	cin >> M >> N >> H;

	vector<vector<vector<int>>> storage(H, vector<vector<int>>(N, vector<int>(M)));

	for (int i = 0;i < H;i++) {
		for (int j = 0;j < N;j++) {
			for (int k = 0;k < M;k++) {
				cin >> storage[i][j][k];

				if (storage[i][j][k] == 1)
					q.push({ {k, j}, i });
				if (storage[i][j][k])
					cnt++;
			}
		}
	}

	if (cnt != M * N * H) {
		while (!q.empty()) {
			x = q.front().first.first;
			y = q.front().first.second;
			z = q.front().second;
			answer = max(answer, storage[z][y][x] - 1);
			q.pop();
			for (int i = 0;i < 6;i++) {
				nx = x + dx[i];
				ny = y + dy[i];
				nz = z + dz[i];
				if (nx >= 0 && nx < M && ny >= 0 && ny < N && nz >= 0 && nz < H && !storage[nz][ny][nx]) {
					q.push({ {nx, ny}, nz });
					storage[nz][ny][nx] = storage[z][y][x] + 1;
					cnt++;
				}
			}
		}
		if (cnt != M * N * H)
			answer = -1;
	}

	cout << answer;
	return 0;
}
