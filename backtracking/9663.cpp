#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

int N, answer;
vector<int> col;

void dfs(int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	col.resize(N);
	dfs(0);

	cout << answer;
	return 0;
}

void dfs(int index) {
	if (index == N)
		answer++;
	else {
		for (int i = 0;i < N;i++) {
			bool flag = true;

			col[index] = i;
			for (int j = 0;j < index;j++) {
				if (col[index] == col[j] || abs(col[index] - col[j]) == index - j) {
					flag = false;
					break;
				}
			}
			if (flag)
				dfs(index + 1);
		}
	}
}
