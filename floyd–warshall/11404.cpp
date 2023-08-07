#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, m = 0, a = 0, b = 0, c = 0;

	cin >> n >> m;

	vector<vector<int>> adj(n + 1, vector<int>(n + 1, 10000000));

	for (int i = 1;i <= n;i++)
		adj[i][i] = 0;

	for (int i = 0;i < m;i++) {
		cin >> a >> b >> c;

		adj[a][b] = min(adj[a][b], c);
	}

	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			for (int k = 1;k <= n;k++)
				adj[j][k] = min(adj[j][k], adj[j][i] + adj[i][k]);
		}
	}

	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			if (adj[i][j] == 10000000)
				cout << "0 ";
			else
				cout << adj[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}
