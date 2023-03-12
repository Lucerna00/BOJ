#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

char matrix[25][25];
int N, dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 }, cnt;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> answer;

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> matrix[i][j];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (matrix[i][j] == '1') {
				cnt = 0;
				dfs(j, i);
				answer.push_back(cnt);
			}
		}
	}
	sort(answer.begin(), answer.end());

	cout << answer.size() << '\n';
	for (vector<int>::iterator i = answer.begin(); i != answer.end(); i++)
		cout << *i << '\n';
	return 0;
}

void dfs(int x, int y) {
	int nx = 0, ny = 0;

	matrix[y][x] = '0';
	cnt++;
	for (int i = 0; i < 4; i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < N && ny >= 0 && ny < N && matrix[ny][nx] == '1')
			dfs(nx, ny);
	}
}
