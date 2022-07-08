#include<stdio.h>

int queue[51], front = 1;

int main() {
	int N = 0, M = 0, delete = 1, temp = 0, count = 0;

	scanf("%d %d", &N, &M);

	for (int i = 0;i < M;i++) {
		scanf("%d", &delete);
		for (temp = 0;front != delete;front = front % N + 1)
			temp += !queue[front];
		count += (temp < N - i - temp) ? temp : (N - i - temp);
		queue[front] = 1;
	}

	printf("%d", count);
	return 0;
}