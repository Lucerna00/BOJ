#include<stdio.h>
#include<stdlib.h>

int inputList[1000000], sortList[1000000];

int compare(const void*, const void*);
int binarySearch(int, int, int);

int main() {
	int N = 0, temp = 0, index = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%d", &inputList[i]);
		sortList[i] = inputList[i];
	}

	qsort(sortList, N, sizeof(int), compare);
	for (int i = 0;i < N;) {
		temp = sortList[i];
		sortList[index++] = temp;
		while (++i < N && temp == sortList[i]);
	}

	for (int i = 0;i < N;i++) {
		printf("%d ", binarySearch(inputList[i], 0, index - 1));
	}
	return 0;
}

int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

int binarySearch(int x, int left, int right) {
	int mid = (left + right) / 2;

	if (x == sortList[mid])
		return mid;
	else if (x < sortList[mid])
		return binarySearch(x, left, mid - 1);
	else
		return binarySearch(x, mid + 1, right);
}
