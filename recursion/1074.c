#include<stdio.h>

int r, c, order;

void point(int, int, int);

int main() {
	int N = 0;

	scanf("%d %d %d", &N, &r, &c);

	point(0, 0, 1 << N);
	return 0;
}

void point(int row, int col, int power) {
	if (power == 1)
		printf("%d", order);
	else {
		if (r < row + power / 2) {
			if (c < col + power / 2)
				point(row, col, power / 2);
			else {
				order += (power / 2) * (power / 2);
				point(row, col + power / 2, power / 2);
			}
		}
		else {
			if (c < col + power / 2) {
				order += (power / 2) * (power / 2) * 2;
				point(row + power / 2, col, power / 2);
			}
			else {
				order += (power / 2) * (power / 2) * 3;
				point(row + power / 2, col + power / 2, power / 2);
			}
		}
	}
}