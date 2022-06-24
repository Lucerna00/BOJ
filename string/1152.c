#include<stdio.h>
#include<string.h>

char input[1000001];

int main() {
	char* token = NULL;
	int count = 0;

	fgets(input, 1000001, stdin);
	if(input[strlen(input)-1] == '\n')
		input[strlen(input) - 1] = '\0';
	token = strtok(input, " ");
	while (token) {
		count++;
		token = strtok(NULL, " ");
	}
	printf("%d", count);
	return 0;
}
