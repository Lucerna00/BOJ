#include<iostream>
#include<queue>

using namespace std;

bool visited[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, dx[8] = { 1,-1, }, x = 0, cnt = 0, nx = 0;
	queue<pair<int, int>> q;

	cin >> dx[2] >> dx[3] >> N >> M;

	dx[4] = -dx[2];
	dx[5] = -dx[3];
	q.push({ N, 0 });
	visited[N] = true;
	while (true) {
		x = q.front().first;
		cnt = q.front().second;
		q.pop();
		if (x == M) {
			cout << cnt;
			break;
		}
		dx[6] = x * dx[2] - x;
		dx[7] = x * dx[3] - x;
		for (int i = 0; i < 8; i++) {
			nx = x + dx[i];
			if (nx >= 0 && nx < 100001 && !visited[nx]) {
				q.push({ nx, cnt + 1 });
				visited[nx] = true;
			}
		}
	}
	return 0;
}
