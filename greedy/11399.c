#include<stdio.h>
#include<stdlib.h>

int compare(const void*, const void*);

int main() {
	int N = 0, timeList[1000] = { 0 }, sum = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++)
		scanf("%d", &timeList[i]);

	qsort(timeList, N, sizeof(int), compare);
	
	for (int i = 0;i < N;i++) {
		for (int j = 0;j <= i;j++)
			sum += timeList[j];
	}

	printf("%d", sum);
	return 0;
}

int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}