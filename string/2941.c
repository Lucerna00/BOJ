#include<stdio.h>
#include<string.h>

int main() {
	char input[101] = { 0 };
	int count = 0;

	scanf("%s", input);
	count = strlen(input);
	for (int i = 0;i < strlen(input);i++) {
		if (input[i] == '=') {
			if (input[i - 1] == 'c' || input[i - 1] == 's')
				count--;
			if (input[i - 1] == 'z') {
				count--;
				if (input[i - 2] == 'd')
					count--;
			}
		}
		else if (input[i] == '-') {
			if (input[i - 1] == 'c' || input[i - 1] == 'd')
				count--;
		}
		else if (input[i] == 'j') {
			if (input[i - 1] == 'l' || input[i - 1] == 'n')
				count--;
		}
	}
	printf("%d", count);
	return 0;
}