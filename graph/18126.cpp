#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

bool visited[5001];
vector<pair<int, int>> adj[5001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, A = 0, B = 0, C = 0, v = 0;
	long long d = 0, answer = 0;
	vector<pair<int, int>>::iterator i;
	queue<pair<int, long long>> q;

	cin >> N;
	for (int i = 0;i < N - 1;i++) {
		cin >> A >> B >> C;

		adj[A].push_back({ B,C });
		adj[B].push_back({ A,C });
	}

	visited[1] = true;
	for (i = adj[1].begin(); i != adj[1].end();i++) {
		q.push({ (*i).first, (*i).second });
		visited[(*i).first] = true;
	}
	while (!q.empty()) {
		v = q.front().first;
		d = q.front().second;
		q.pop();
		answer = max(answer, d);
		for (i = adj[v].begin();i != adj[v].end();i++) {
			if (!visited[(*i).first]) {
				q.push({ (*i).first, d + (*i).second });
				visited[(*i).first] = true;
			}
		}
	}

	cout << answer;
	return 0;
}
