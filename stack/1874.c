#include<stdio.h>

char result[200000];
int stack[100000], top = -1, index;

int main() {
	int n = 0, input = 0, num = 1, found = 1;

	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &input);
		if (found) {
			while (num <= input) {
				stack[++top] = num++;
				result[index++] = '+';
			}
			if (stack[top] == input) {
				top--;
				result[index++] = '-';
			}
			else
				found = 0;
		}
	}

	if (found) {
		for (int i = 0;i < index;i++)
			printf("%c\n", result[i]);
	}
	else
		printf("NO");
	return 0;
}