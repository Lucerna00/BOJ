#include<iostream>
#include<vector>

using namespace std;

vector<int> adj[101];
int visited[101], answer;

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, m = 0, v1 = 0, v2 = 0;

	cin >> n;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> v1 >> v2;
		adj[v1].push_back(v2);
		adj[v2].push_back(v1);
	}

	dfs(1);

	cout << answer - 1;
	return 0;
}

void dfs(int v) {
	visited[v] = 1;
	answer++;
	for (int i = 0; i < adj[v].size(); i++) {
		if (!visited[adj[v][i]])
			dfs(adj[v][i]);
	}
}
