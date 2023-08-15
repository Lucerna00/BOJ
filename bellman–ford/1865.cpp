#include<iostream>
#include<vector>

using namespace std;

int N, M, W;
vector<pair<pair<int, int>, int>> e;

void bellman();

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC = 0, S = 0, E = 0, T = 0;

	cin >> TC;
	while (TC--) {
		cin >> N >> M >> W;

		e.clear();

		for (int i = 0; i < M; i++) {
			cin >> S >> E >> T;

			e.push_back({ {S, E}, T });
			e.push_back({ {E, S}, T });
		}
		for (int i = 0; i < W; i++) {
			cin >> S >> E >> T;

			e.push_back({ {S, E}, -T });
		}

		bellman();
	}
	return 0;
}

void bellman() {
	int from = 0, to = 0, d = 0;
	vector<int> dist(N + 1, 5000000);

	dist[1] = 0;
	for (int i = 0; i < N; i++) {
		for (auto j = e.begin(); j != e.end(); j++) {
			from = (*j).first.first;
			to = (*j).first.second;
			d = (*j).second;
			if (dist[to] > dist[from] + d) {

				if (i == N - 1) {
					cout << "YES\n";
					return;
				}

				dist[to] = dist[from] + d;
			}
		}
	}

	cout << "NO\n";
}