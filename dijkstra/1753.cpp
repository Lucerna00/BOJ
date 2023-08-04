#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int V = 0, E = 0, K = 0, u = 0, v = 0, w = 0;
	vector<vector<pair<int, int>>> adj;
	vector<int> answer;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	cin >> V >> E;

	adj.resize(V + 1);
	answer.assign(V + 1, 200000);

	cin >> K;
	for (int i = 0;i < E;i++) {
		cin >> u >> v >> w;

		adj[u].push_back({ v, w });
	}

	answer[K] = 0;
	pq.push({ answer[K], K });
	while (!pq.empty()) {
		w = pq.top().first;
		v = pq.top().second;
		pq.pop();
		for (auto i = adj[v].begin();i != adj[v].end();i++) {
			u = (*i).first;
			if (answer[u] > w + (*i).second) {
				answer[u] = w + (*i).second;
				pq.push({ answer[u], u });
			}
		}
	}

	for (int i = 1;i <= V;i++) {
		if (answer[i] == 200000)
			cout << "INF\n";
		else
			cout << answer[i] << '\n';
	}
	return 0;
}
