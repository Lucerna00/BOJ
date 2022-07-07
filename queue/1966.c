#include<stdio.h>

int queue[100], front;

int main() {
	int n = 0, N = 0, M = 0, order = 1, max = 0;

	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d %d", &N, &M);
		for (int j = 0;j < N;j++)
			scanf("%d", &queue[j]);
		front = 0;
		order = 1;
		while (1) {
			max = 0;
			for (int k = 0;k < N;k++) {
				if (queue[k] > max)
					max = queue[k];
			}
			while (queue[front] != max)
				front = (front + 1) % N;
			if (front == M)
				break;
			queue[front] = 0;
			order++;
		}
		printf("%d\n", order);
	}
	return 0;
}