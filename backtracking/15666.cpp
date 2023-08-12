#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, M;
vector<int> num, answer;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	num.resize(N);
	answer.resize(M);

	for (int i = 0; i < N; i++)
		cin >> num[i];

	sort(num.begin(), num.end());
	dfs(0, 0);
	return 0;
}

void dfs(int start, int index) {
	if (index == M) {
		for (int i = 0; i < M; i++)
			cout << answer[i] << " ";
		cout << '\n';
	}
	else {
		int temp = 0;

		for (int i = start; i < N; i++) {
			if (num[i] != temp) {
				answer[index] = num[i];
				temp = answer[index];
				dfs(i, index + 1);
			}
		}
	}
}
