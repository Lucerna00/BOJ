#include<stdio.h>

int paper[2187][2187], count[3];

void divide(int, int, int);

int main() {
	int N = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++)
			scanf("%d", &paper[i][j]);
	}

	divide(N, 0, 0);

	printf("%d\n%d\n%d", count[0], count[1], count[2]);
	return 0;
}

void divide(int N, int x, int y) {
	int flag = paper[y][x];

	for (int i = y;i < y + N;i++) {
		for (int j = x;j < x + N;j++) {
			if (paper[i][j] != flag) {
				divide(N / 3, x, y);
				divide(N / 3, x + N / 3, y);
				divide(N / 3, x + N / 3 * 2, y);
				divide(N / 3, x, y + N / 3);
				divide(N / 3, x + N / 3, y + N / 3);
				divide(N / 3, x + N / 3 * 2, y + N / 3);
				divide(N / 3, x, y + N / 3 * 2);
				divide(N / 3, x + N / 3, y + N / 3 * 2);
				divide(N / 3, x + N / 3 * 2, y + N / 3 * 2);
				return;
			}
		}
	}
	count[flag + 1]++;
}