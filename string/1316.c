#include<stdio.h>
#include<string.h>

int main() {
	char input[101] = { 0 }, temp = 0;
	int N = 0, len = 0, tf = 1, checked[26] = { 0 }, count = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%s", input);
		len = strlen(input);
		tf = 1;
		for (int j = 0;j < 26;j++)
			checked[j] = 0;
		for (int k = 0;k < len;) {
			if (checked[input[k] - 97]) {
				tf = 0;
				break;
			}
			checked[input[k] - 97] = 1;
			temp = input[k];
			while (k < len && temp == input[k])
				k++;
		}
		if (tf)
			count++;
	}
	printf("%d", count);
	return 0;
}
