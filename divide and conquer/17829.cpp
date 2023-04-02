#include<iostream>
#include<queue>

using namespace std;

int matrix[1024][1024];

int divide(int, int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++)
			cin >> matrix[i][j];
	}

	cout << divide(N, 0, 0);
	return 0;
}

int divide(int N, int r, int c) {
	priority_queue<int> pq;

	if (N == 2) {
		pq.push(matrix[r][c]);
		pq.push(matrix[r][c + 1]);
		pq.push(matrix[r + 1][c]);
		pq.push(matrix[r + 1][c + 1]);
		pq.pop();
		return pq.top();
	}
	pq.push(divide(N / 2, r, c));
	pq.push(divide(N / 2, r, c + N / 2));
	pq.push(divide(N / 2, r + N / 2, c));
	pq.push(divide(N / 2, r + N / 2, c + N / 2));
	pq.pop();
	return pq.top();
}
