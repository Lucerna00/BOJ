#include<iostream>
#include<algorithm>

using namespace std;

bool visited[5];
int cards[5], unit, maxUnit, answer[1000];

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, num = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int i = 0;i < 5;i++)
			cin >> cards[i];

		unit = 0;
		dfs(0, 0);
		answer[i] = unit;
		maxUnit = max(maxUnit, unit);
	}

	for (int i = N - 1;i >= 0;i--) {
		if (answer[i] == maxUnit) {
			cout << i + 1;

			break;
		}
	}
	return 0;
}

void dfs(int cnt, int sum) {
	if (cnt == 3)
		unit = max(unit, sum % 10);
	else {
		for (int i = 0;i < 5;i++) {
			if (!visited[i]) {
				visited[i] = true;
				dfs(cnt + 1, sum + cards[i]);
				visited[i] = false;
			}
		}
	}
}
