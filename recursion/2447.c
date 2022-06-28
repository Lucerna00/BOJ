#include<stdio.h>

void point(int, int, int);

int main() {
	int N = 0;

	scanf("%d", &N);

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++)
			point(N, i, j);
		printf("\n");
	}
	return 0;
}

void point(int N, int r, int c) {
	if (N == 1)
		printf("*");
	else {
		if (r % N >= N / 3 && r % N < N / 3 * 2 && c % N >= N / 3 && c % N < N / 3 * 2)
			printf(" ");
		else
			point(N / 3, r, c);
	}
}