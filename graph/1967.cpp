#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int answer;
vector<vector<pair<int, int>>> adj;

int dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, n1 = 0, n2 = 0, w = 0;

	cin >> n;

	adj.resize(n + 1);

	for (int i = 0;i < n - 1;i++) {
		cin >> n1 >> n2 >> w;

		adj[n1].push_back({ n2, w });
	}

	dfs(1);

	cout << answer;
	return 0;
}

int dfs(int n) {
	int len = 0, len1 = 0, len2 = 0;

	for (auto i = adj[n].begin();i != adj[n].end();i++) {
		len = dfs((*i).first) + (*i).second;
		if (len > len1) {
			len2 = len1;
			len1 = len;
		}
		else if (len > len2)
			len2 = len;
	}
	answer = max(answer, len1 + len2);
	return len1;
}
