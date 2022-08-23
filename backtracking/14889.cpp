	#include<iostream>
	#include<algorithm>
	#include<cmath>

	using namespace std;

	bool visited[11];
	int N, matrix[21][21], start, link, answer = 10000;

	void dfs(int, int);

	int main() {
		ios::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		cin >> N;
		for (int i = 1;i <= N;i++) {
			for (int j = 1;j <= N;j++)
				cin >> matrix[i][j];
		}

		dfs(0, 1);

		cout << answer;
		return 0;
	}

	void dfs(int cnt, int curr) {
		if (cnt == N / 2) {
			start = 0;
			link = 0;
			for (int i = 1;i <= N - 1;i++) {
				for (int j = i + 1;j <= N;j++) {
					if (visited[i] && visited[j])
						start += (matrix[i][j] + matrix[j][i]);
					if (!visited[i] && !visited[j])
						link += (matrix[i][j] + matrix[j][i]);
				}
			}
			answer = min(answer, abs(start - link));
		}
		else {
			for (int i = curr;i <= N;i++) {
				if (!visited[i]) {
					visited[i] = true;
					dfs(cnt + 1, i + 1);
					visited[i] = false;
				}
			}
		}
	}