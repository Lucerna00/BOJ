#include<iostream>
#include<string>

using namespace std;

int N = 0, M = 0, output[8];

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	dfs(0);
	return 0;
}

void dfs(int K) {
	if (K == M) {
		for (int i = 0;i < M;i++)
			cout << output[i] << ' ';
		cout << '\n';
	}
	else {
		for (int i = 1;i <= N;i++) {
			output[K] = i;
			dfs(K + 1);
		}
	}
}