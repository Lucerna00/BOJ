#include<stdio.h>
#include<string.h>

int queue[2000000], front = -1, rear = -1;

int empty();

int main() {
	char command[6] = { 0 };
	int N = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%s", command);
		if (strcmp(command, "push") == 0)
			scanf("%d", &queue[++rear]);
		else if (strcmp(command, "pop") == 0) {
			if (!empty())
				printf("%d\n", queue[++front]);
			else
				printf("%d\n", -1);
		}
		else if (strcmp(command, "size") == 0)
			printf("%d\n", rear - front);
		else if (strcmp(command, "empty") == 0)
			printf("%d\n", empty());
		else if (strcmp(command, "front") == 0) {
			if (!empty())
				printf("%d\n", queue[front + 1]);
			else
				printf("%d\n", -1);
		}
		else {
			if (!empty())
				printf("%d\n", queue[rear]);
			else
				printf("%d\n", -1);
		}
	}
	return 0;
}

int empty() {
	if (front == rear)
		return 1;
	return 0;
}