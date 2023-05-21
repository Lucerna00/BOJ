#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

bool visited[100];
int N;
vector<int> adj[100];

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int exist = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cin >> exist;

			if (exist)
				adj[i].push_back(j);
		}
	}

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			memset(visited, 0, sizeof(visited));
			dfs(i);
			if (visited[j])
				cout << 1 << " ";
			else
				cout << 0 << " ";
		}
		cout << '\n';
	}
	return 0;
}

void dfs(int v) {
	for (int i = 0;i < (int)(adj[v].size());i++) {
		if (!visited[adj[v][i]]) {
			visited[adj[v][i]] = true;
			dfs(adj[v][i]);
		}
	}
}
