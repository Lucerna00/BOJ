#include<iostream>
#include<vector>

using namespace std;

bool visited[200001];
int N, M, cnt;
vector<int> adj[200001];

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int	u = 0, v = 0;
	long long answer = 1;

	cin >> N >> M;
	for (int i = 0;i < M;i++) {
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1;i <= N;i++) {
		if (!visited[i]) {
			visited[i] = true;
			cnt = 1;
			dfs(i);
			answer = (answer * cnt) % 1000000007;
		}
	}
	cout << answer;
	return 0;
}

void dfs(int v) {
	vector<int>::iterator i;

	for (i = adj[v].begin();i != adj[v].end();i++) {
		if (!visited[*i]) {
			visited[*i] = true;
			cnt++;
			dfs(*i);
		}
	}
}
