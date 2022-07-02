#include<stdio.h>

char board[50][50];

int main() {
	int N = 0, M = 0, count = 0, min = 64;

	scanf("%d %d", &N, &M);
	for (int i = 0;i < N;i++)
		scanf("%s", &board[i]);

	for (int i = 0;i <= N - 8;i++) {
		for (int j = 0;j <= M - 8;j++) {
			count = 0;
			for (int r = i;r < i + 8;r++) {
				for (int c = j;c < j + 8;c++) {
					if ((r + c) % 2 == 0 && board[r][c] != board[i][j])
						count++;
					else if ((r + c) % 2 == 1 && board[r][c] == board[i][j])
						count++;
				}
			}
			count = 64 - count < count ? 64 - count : count;
			min = count < min ? count : min;
		}
	}

	printf("%d", min);
	return 0;
}