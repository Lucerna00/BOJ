#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool visited[20001];
int dist[20001];
vector<int> adj[20001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, A = 0, B = 0, v = 0, d = 0, maxD = 0, ansV = 0, ansCnt = 0;
	vector<int>::iterator i;
	queue<pair<int, int>> q;

	cin >> N >> M;
	for (int i = 0;i < M;i++) {
		cin >> A >> B;

		adj[A].push_back(B);
		adj[B].push_back(A);
	}

	visited[1] = true;
	for (i = adj[1].begin();i != adj[1].end();i++) {
		q.push({ *i, 1 });
		visited[*i] = true;
	}
	while (!q.empty()) {
		v = q.front().first;
		d = q.front().second;
		dist[v] = d;
		maxD = d;
		q.pop();
		for (i = adj[v].begin();i != adj[v].end();i++) {
			if (!visited[*i]) {
				q.push({ *i, d + 1 });
				visited[*i] = true;
			}
		}
	}
	for (int i = N;i >= 1;i--) {
		if (dist[i] == maxD) {
			ansV = i;
			ansCnt++;
		}
	}

	cout << ansV << " " << maxD << " " << ansCnt;
	return 0;
}
