#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, x = 0, y = 0, nx = 0, ny = 0, answer = 0;
	queue<pair<int, int>> q;

	cin >> N >> M;

	vector<vector<char>> campus(N, vector<char>(M));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> campus[i][j];

			if (campus[i][j] == 'I') {
				q.push({ j, i });
				campus[i][j] = 'X';
			}
		}
	}

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx >= 0 && nx < M && ny >= 0 && ny < N && campus[ny][nx] != 'X') {
				if (campus[ny][nx] == 'P')
					answer++;
				q.push({ nx,ny });
				campus[ny][nx] = 'X';
			}
		}
	}

	if (!answer)
		cout << "TT";
	else
		cout << answer;
	return 0;
}
