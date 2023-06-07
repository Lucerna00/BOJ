#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

unordered_map<string, string> adj;
unordered_map<string, bool> visited;

void dfs(string);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, T = 1, answer = 0;
	string str1, str2, start;
	unordered_map<string, string>::iterator i;

	while (true) {
		adj.clear();
		visited.clear();
		answer = 0;

		cin >> N;

		if (N == 0)
			break;

		for (int i = 0;i < N;i++) {
			cin >> str1 >> str2;

			adj[str1] = str2;
		}

		for (i = adj.begin();i != adj.end();i++) {
			if (!visited[(*i).first]) {
				answer++;
				visited[(*i).first] = true;
				dfs((*i).second);
			}
		}

		cout << T++ << " " << answer << '\n';
	}
	return 0;
}

void dfs(string v) {
	if (!visited[v]) {
		visited[v] = true;
		dfs(adj[v]);
	}
}
