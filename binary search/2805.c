#include<stdio.h>

int treeHeight[1000000];

int main() {
	int N = 0, M = 0, max = 0, low = 1, mid = 0, high = 0, result = 0;
	long long cut = 0;

	scanf("%d %d", &N, &M);
	for (int i = 0;i < N;i++) {
		scanf("%d", &treeHeight[i]);
		if (treeHeight[i] > max)
			max = treeHeight[i];
	}

	high = max;
	while (low <= high) {
		cut = 0;
		mid = (low + high) / 2;
		for (int i = 0;i < N;i++) {
			if (treeHeight[i] > mid)
				cut += (treeHeight[i] - mid);
		}
		if (cut >= M) {
			low = mid + 1;
			if (result < mid)
				result = mid;
		}
		else
			high = mid - 1;
	}

	printf("%d", result);
	return 0;
}