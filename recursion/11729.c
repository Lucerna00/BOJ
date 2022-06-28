#include<stdio.h>

void hanoi(int, int, int, int);

int main() {
	int N = 0;

	scanf("%d", &N);

	printf("%d\n", (1 << N) - 1);
	hanoi(N, 1, 2, 3);
	return 0;
}

void hanoi(int N, int from, int via, int to) {
	if (N == 1)
		printf("%d %d\n", from, to);
	else {
		hanoi(N - 1, from, to, via);
		printf("%d %d\n", from, to);
		hanoi(N - 1, via, from, to);
	}
}