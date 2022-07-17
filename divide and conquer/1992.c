#include<stdio.h>

char image[65][65];

void divide(int, int, int);

int main() {
	int N = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++)
		scanf("%s", &image[i]);

	divide(N, 0, 0);
	return 0;
}

void divide(int N, int x, int y) {
	char flag = image[y][x];

	for (int i = y;i < y + N;i++) {
		for (int j = x;j < x + N;j++) {
			if (image[i][j] != flag) {
				printf("(");
				divide(N / 2, x, y);
				divide(N / 2, x + N / 2, y);
				divide(N / 2, x, y + N / 2);
				divide(N / 2, x + N / 2, y + N / 2);
				printf(")");
				return;
			}
		}
	}
	printf("%c", flag);
}