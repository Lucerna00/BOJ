#include<stdio.h>

int main() {
	int num = 0, operator = 0, result = 0, sign = 1;

	while (1) {
		scanf("%d", &num);
		operator = getchar();
		result += sign * num;
		if (operator == '-')
			sign = -1;
		else if (operator == '\n')
			break;
	}

	printf("%d", result);
	return 0;
}