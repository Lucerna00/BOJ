#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

vector<int>adj[1001];
int visited[1001];

void dfs(int);
void bfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, V = 0, v1 = 0, v2 = 0;

	cin >> N >> M >> V;
	for (int i = 0;i < M;i++) {
		cin >> v1 >> v2;
		adj[v1].push_back(v2);
		adj[v2].push_back(v1);
	}

	for (int i = 1;i <= N;i++)
		sort(adj[i].begin(), adj[i].end());

	dfs(V);
	cout << '\n';
	for (int i = 1;i <= N;i++)
		visited[i] = 0;
	bfs(V);
	return 0;
}

void dfs(int v) {
	visited[v] = 1;
	cout << v << " ";
	for (int i = 0;i < adj[v].size();i++) {
		if (!visited[adj[v][i]])
			dfs(adj[v][i]);
	}
}

void bfs(int v) {
	queue<int> q;

	visited[v] = 1;
	q.push(v);
	while (!q.empty()) {
		v = q.front();
		q.pop();
		cout << v << " ";
		for (int i = 0;i < adj[v].size();i++) {
			if (!visited[adj[v][i]]) {
				visited[adj[v][i]] = 1;
				q.push(adj[v][i]);
			}
		}
	}
}
