#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool visited[501];
vector<int> adj[501];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, m = 0, a = 0, b = 0, v = 0, answer = 0;
	queue<int> q;
	vector<int>::iterator i;

	cin >> n;
	cin >> m;
	for (int i = 0;i < m;i++) {
		cin >> a >> b;

		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	visited[1] = true;
	for (i = adj[1].begin(); i != adj[1].end();i++) {
		q.push(*i);
		visited[*i] = true;
		answer++;
	}
	while (!q.empty()) {
		v = q.front();
		q.pop();
		for (i = adj[v].begin();i != adj[v].end();i++) {
			if (!visited[*i]) {
				visited[*i] = true;
				answer++;
			}
		}
	}

	cout << answer;
	return 0;
}
