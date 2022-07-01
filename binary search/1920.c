#include<stdio.h>
#include<stdlib.h>

long long A[100000];

int compare(const void*, const void*);
int binarySearch(int, int, long long);

int main() {
	int N = 0, M = 0;
	long long num = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++)
		scanf("%lld", &A[i]);

	qsort(A, N, sizeof(long long), compare);

	scanf("%d", &M);
	for (int i = 0;i < M;i++) {
		scanf("%lld", &num);
		printf("%d\n", binarySearch(0, N - 1, num));
	}
	return 0;
}

int compare(const void* a, const void* b) {
	return *(long long*)a - *(long long*)b >= 0 ? *(long long*)a - *(long long*)b == 0 ? 0 : 1 : -1;
}

int binarySearch(int left, int right, long long data) {
	int mid = (left + right) / 2;

	if (left <= right) {
		if (data < A[mid])
			return binarySearch(left, mid - 1, data);
		else if (data > A[mid])
			return binarySearch(mid + 1, right, data);
		else
			return 1;
	}
	return 0;
}