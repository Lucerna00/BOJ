#include<stdio.h>
#include<string.h>

char command[100001];
int queue[100000], front, rear, n;

void AC();

int main() {
	int T = 0;

	scanf("%d", &T);
	for (int i = 0;i < T;i++) {
		scanf("%s", command);
		scanf("%d ", &n);
		getchar();
		for (int j = 0;j < n;j++) {
			scanf("%d", &queue[j]);
			getchar();
		}
		if (!n)
			getchar();
		AC();
	}
	return 0;
}

void AC() {
	int len = strlen(command), dir = 1;

	front = 0;
	rear = n - 1;
	for (int i = 0;i < len;i++) {
		if (command[i] == 'R')
			dir *= -1;
		else {
			if (front > rear) {
				printf("error\n");
				return;
			}
			if (dir == 1)
				front++;
			else
				rear--;
		}
	}

	printf("[");
	if (dir == 1) {
		for (;front <= rear;front++) {
			printf("%d", queue[front]);
			if (front != rear)
				printf(",");
		}
	}
	else {
		for (;rear >= front;rear--) {
			printf("%d", queue[rear]);
			if (rear != front)
				printf(",");
		}
	}
	printf("]\n");
}