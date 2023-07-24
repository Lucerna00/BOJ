#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, A = 0, B = 0;

	cin >> N >> M;

	vector<vector<int>> adj(N + 1, vector<int>(N + 1, 100));

	for (int i = 1; i <= N; i++)
		adj[i][i] = 0;

	for (int i = 0; i < M; i++) {
		cin >> A >> B;

		adj[A][B] = 1;
		adj[B][A] = 1;
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 1; k <= N; k++)
				adj[j][k] = min(adj[j][k], adj[j][i] + adj[i][k]);
		}
	}

	vector<int> answer(N + 1);

	for (int i = 1; i <= N; i++)
		answer[i] = accumulate(adj[i].begin(), adj[i].end(), 0);

	cout << min_element(answer.begin() + 1, answer.end()) - answer.begin();
	return 0;
}
