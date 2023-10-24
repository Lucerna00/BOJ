#include<iostream>

using namespace std;

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;

	cin >> T;

	dfs(T);
	return 0;
}

void dfs(int T) {
	if (T == 0)
		return;

	dfs(T / 9);

	cout << T % 9;
}
