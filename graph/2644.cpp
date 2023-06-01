#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool visited[101];
vector<int> adj[101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, n1 = 0, n2 = 0, m = 0, x = 0, y = 0, v = 0, d = 0;
	queue<pair<int, int>> q;
	vector<int>::iterator i;

	cin >> n;
	cin >> n1 >> n2;
	cin >> m;
	for (int i = 0;i < m;i++) {
		cin >> x >> y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	visited[n1] = true;
	for (i = adj[n1].begin(); i != adj[n1].end();i++) {
		q.push({ *i, 1 });
		visited[*i] = true;
	}
	while (!q.empty()) {
		v = q.front().first;
		d = q.front().second;
		q.pop();

		if (v == n2) {
			cout << d;
			return 0;
		}

		for (i = adj[v].begin();i != adj[v].end();i++) {
			if (!visited[*i]) {
				q.push({ *i, d + 1 });
				visited[*i] = true;
			}
		}
	}

	cout << -1;
	return 0;
}
