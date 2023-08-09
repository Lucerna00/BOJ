#include<iostream>
#include<vector>

using namespace std;

int node, answer;
vector<bool> visited;
vector<vector<pair<int, int>>> adj;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int V = 0, n1 = 0, n2 = 0, w = 0;

	cin >> V;

	visited.resize(V + 1);
	adj.resize(V + 1);

	for (int i = 0; i < V; i++) {
		cin >> n1;

		while (true) {
			cin >> n2;

			if (n2 == -1)
				break;

			cin >> w;

			adj[n1].push_back({ n2, w });
		}
	}

	dfs(1, 0);
	dfs(node, 0);

	cout << answer;
	return 0;
}

void dfs(int n, int d) {
	if (d > answer) {
		node = n;
		answer = d;
	}
	visited[n] = true;
	for (auto i = adj[n].begin(); i != adj[n].end(); i++) {
		if (!visited[(*i).first])
			dfs((*i).first, d + (*i).second);
	}
	visited[n] = false;
}
