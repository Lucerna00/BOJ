#include<stdio.h>

int paper[128][128], white, blue;

void divide(int, int, int);

int main() {
	int N = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++)
			scanf("%d", &paper[i][j]);
	}

	divide(N, 0, 0);

	printf("%d\n%d", white, blue);
	return 0;
}

void divide(int N, int x, int y) {
	int count = 0;

	for (int i = y;i < y + N;i++) {
		for (int j = x;j < x + N;j++) {
			if (paper[i][j])
				count++;
		}
	}
	if (count == 0)
		white++;
	else if (count == N * N)
		blue++;
	else {
		divide(N / 2, x, y);
		divide(N / 2, x + N / 2, y);
		divide(N / 2, x, y + N / 2);
		divide(N / 2, x + N / 2, y + N / 2);
	}
}