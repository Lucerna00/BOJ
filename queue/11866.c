#include<stdio.h>

int queue[1001], front, rear, N;

void push(int);
int pop();

int main() {
	int K = 0, temp = 0;

	scanf("%d %d", &N, &K);
	for (int i = 1;i <= N;i++)
		queue[i] = i;
	rear = N;

	printf("<");
	for (int i = 0;i < N - 1;i++) {
		for (int j = 0;j < K - 1;j++) {
			temp = pop();
			push(temp);
		}
		printf("%d, ", pop());
	}
	printf("%d>", pop());
	return 0;
}

void push(int num) {
	rear = (rear + 1) % (N + 1);
	queue[rear] = num;
}

int pop() {
	front = (front + 1) % (N + 1);
	return queue[front];
}