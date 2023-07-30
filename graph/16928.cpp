#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int board[101], cnt[101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, x = 0, y = 0, nx = 0;
	queue<int> q;

	for (int i = 1;i <= 100;i++)
		board[i] = i;

	cin >> N >> M;
	while (N--) {
		cin >> x >> y;

		board[x] = y;
	}
	while (M--) {
		cin >> x >> y;

		board[x] = y;
	}

	q.push(1);
	board[1] = 0;
	cnt[1] = 0;
	while (!q.empty()) {
		x = q.front();
		if (x == 100)
			break;
		q.pop();
		for (int i = 1;i <= 6;i++) {
			if (x + i <= 100 && board[board[x + i]]) {
				nx = board[x + i];
				q.push(nx);
				board[nx] = 0;
				cnt[nx] = cnt[x] + 1;
			}
		}
	}

	cout << cnt[100];
	return 0;
}
