#include<iostream>
#include<algorithm>

using namespace std;

int N, M, num[8], visited[8], answer[8];

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0;i < N;i++)
		cin >> num[i];

	sort(num, num + N);
	dfs(0);
	return 0;
}

void dfs(int cnt) {
	if (cnt == M) {
		for (int i = 0;i < M;i++)
			cout << answer[i] << " ";
		cout << '\n';
	}
	else {
		for (int i = 0;i < N;i++) {
			if (!visited[i]) {
				visited[i] = 1;
				answer[cnt] = num[i];
				dfs(cnt + 1);
				visited[i] = 0;
			}
		}
	}
}
