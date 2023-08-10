#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int X = 0;
vector<int> dist[2];
vector<vector<pair<int, int>>> adj[2];

void dijkstra(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, r1 = 0, r2 = 0, T = 0, answer = 0;

	cin >> N >> M >> X;

	dist[0].assign(N + 1, 100000);
	dist[1].assign(N + 1, 100000);
	adj[0].resize(N + 1);
	adj[1].resize(N + 1);

	for (int i = 0; i < M; i++) {
		cin >> r1 >> r2 >> T;

		adj[0][r1].push_back({ T, r2 });
		adj[1][r2].push_back({ T, r1 });
	}

	dijkstra(0);
	dijkstra(1);
	for (int i = 1; i <= N; i++)
		answer = max(answer, dist[0][i] + dist[1][i]);

	cout << answer;
	return 0;
}

void dijkstra(int n) {
	int d = 0, r1 = 0, r2 = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	dist[n][X] = 0;
	pq.push({ dist[n][X], X });
	while (!pq.empty()) {
		d = pq.top().first;
		r1 = pq.top().second;
		pq.pop();
		for (auto i = adj[n][r1].begin(); i != adj[n][r1].end(); i++) {
			r2 = (*i).second;
			if (dist[n][r2] > d + (*i).first) {
				dist[n][r2] = d + (*i).first;
				pq.push({ dist[n][r2], r2 });
			}
		}
	}
}
