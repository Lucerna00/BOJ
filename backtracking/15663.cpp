#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, M;
vector<bool> visited;
vector<int> num, answer;

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	visited.resize(N);
	num.resize(N);
	answer.resize(M);

	for (int i = 0;i < N;i++)
		cin >> num[i];

	sort(num.begin(), num.end());
	dfs(0);
	return 0;
}

void dfs(int index) {
	int temp = 0;

	if (index == M) {
		for (int i = 0;i < M;i++)
			cout << answer[i] << " ";
		cout << '\n';
	}
	else {
		for (int i = 0;i < N;i++) {
			if (!visited[i] && num[i] != temp) {
				temp = num[i];
				visited[i] = true;
				answer[index] = num[i];
				dfs(index + 1);
				visited[i] = false;
			}
		}
	}
}
