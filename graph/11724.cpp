#include<iostream>
#include<vector>

using namespace std;

vector<int> adj[1001];
int visited[10001];

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, u = 0, v = 0, answer = 0;

	cin >> N >> M;
	for (int i = 0;i < M;i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1;i <= N;i++) {
		if (!visited[i]) {
			answer++;
			dfs(i);
		}
	}

	cout << answer;
	return 0;
}

void dfs(int v) {
	visited[v] = 1;
	for (int i = 0;i < adj[v].size();i++) {
		if (!visited[adj[v][i]])
			dfs(adj[v][i]);
	}
}
