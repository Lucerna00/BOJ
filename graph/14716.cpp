#include<iostream>
#include<queue>

using namespace std;

int banner[250][250], dx[8] = { 0,1,1,1,0,-1,-1,-1 }, dy[8] = { -1,-1,0,1,1,1,0,-1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M = 0, N = 0, x = 0, y = 0, nx = 0, ny = 0, answer = 0;
	queue<pair<int, int>> q;

	cin >> M >> N;
	for (int i = 0;i < M;i++) {
		for (int j = 0;j < N;j++)
			cin >> banner[i][j];
	}

	for (int i = 0;i < M;i++) {
		for (int j = 0;j < N;j++) {
			if (banner[i][j]) {
				answer++;
				q.push({ j, i });
				banner[i][j] = 0;
				while (!q.empty()) {
					x = q.front().first;
					y = q.front().second;
					q.pop();
					for (int k = 0;k < 8;k++) {
						nx = x + dx[k];
						ny = y + dy[k];
						if (nx >= 0 && nx < N && ny >= 0 && ny < M && banner[ny][nx]) {
							q.push({ nx, ny });
							banner[ny][nx] = 0;
						}
					}
				}
			}
		}
	}

	cout << answer;
	return 0;
}
