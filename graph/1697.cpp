#include<iostream>
#include<queue>

using namespace std;

bool visited[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, K = 0, x = 0, t = 0;
	queue<pair<int, int>> q;

	cin >> N >> K;

	q.push({ N, 0 });
	while (!q.empty()) {
		x = q.front().first;
		t = q.front().second;
		visited[x] = true;
		q.pop();

		if (x == K) {
			cout << t;
			return 0;
		}

		if (x - 1 >= 0 && !visited[x - 1])
			q.push({ x - 1, t + 1 });
		if (x + 1 <= 100000 && !visited[x + 1])
			q.push({ x + 1, t + 1 });
		if (2 * x <= 100000 && !visited[2 * x])
			q.push({ 2 * x, t + 1 });
	}
	return 0;
}
