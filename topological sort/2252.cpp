#include<iostream>
#include<vector>

using namespace std;

int visited[32001];
vector<int> adj[32001], answer;

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int  N = 0, M = 0, v1 = 0, v2 = 0;

	cin >> N >> M;
	for (int i = 0;i < M;i++) {
		cin >> v1 >> v2;
		adj[v1].push_back(v2);
	}

	for (int i = 1;i <= N;i++) {
		if (!visited[i])
			dfs(i);
	}

	for (int i : answer)
		printf("%d ", i);
	return 0;
}

void dfs(int v) {
	visited[v] = 1;
	for (int i : adj[v]) {
		if (!visited[i])
			dfs(i);
	}
	answer.insert(answer.begin(), v);
}
