#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int M, N, paper[100][100], dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, cnt;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	vector<int> answer;

	cin >> M >> N >> K;
	for (int i = 0;i < K;i++) {
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = y1;j < y2;j++) {
			for (int k = x1;k < x2;k++)
				paper[j][k] = 1;
		}
	}

	for (int i = 0;i < M;i++) {
		for (int j = 0;j < N;j++) {
			if (!paper[i][j]) {
				paper[i][j] = 1;
				cnt = 1;
				dfs(j, i);
				answer.push_back(cnt);
			}
		}
	}
	sort(answer.begin(), answer.end());

	cout << answer.size() << '\n';
	for (vector<int>::iterator i = answer.begin(); i != answer.end();i++)
		cout << *i << " ";
	return 0;
}

void dfs(int x, int y) {
	int nx = 0, ny = 0;

	for (int i = 0;i < 4;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < N && ny >= 0 && ny < M && !paper[ny][nx]) {
			paper[ny][nx] = 1;
			cnt++;
			dfs(nx, ny);
		}
	}
}
