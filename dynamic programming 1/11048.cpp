#include<iostream>
#include<algorithm>

using namespace std;

int maze[1000][1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0;

	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			cin >> maze[i][j];
			if (i > 0 && j > 0)
				maze[i][j] += max({ maze[i - 1][j - 1], maze[i - 1][j], maze[i][j - 1] });
			else if (i > 0)
				maze[i][j] += maze[i - 1][j];
			else if (j > 0)
				maze[i][j] += maze[i][j - 1];
		}
	}

	cout << maze[N - 1][M - 1];
	return 0;
}
