#include<stdio.h>
#include<stdlib.h>

int home[200000];

int compare(const void*, const void*);

int main() {
	int N = 0, C = 0, low = 0, mid = 0, high = 0, pos = 0, count = 1, answer = 0;
	
	scanf("%d %d", &N, &C);
	for (int i = 0;i < N;i++)
		scanf("%d", &home[i]);
	
	qsort(home, N, sizeof(int), compare);

	low = 1;
	high = home[N - 1] - home[0];
	while (low <= high) {
		mid = (low + high) / 2;
		pos = home[0];
		count = 1;
		for (int i = 1;i < N;i++) {
			if (home[i] >= pos + mid) {
				pos = home[i];
				count++;
			}
		}
		if (count >= C) {
			low = mid + 1;
			answer = mid;
		}
		else {
			high = mid - 1;
		}
	}

	printf("%d", answer);
	return 0;
}

int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}