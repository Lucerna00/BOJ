#include<stdio.h>

int lanCable[10000];

int main() {
	int K = 0, N = 0, max = 0, count = 0, result = 0;
	long long low = 1, high = 0, mid = 0;

	scanf("%d %d", &K, &N);
	for (int i = 0;i < K;i++) {
		scanf("%d", &lanCable[i]);
		if (lanCable[i] > max)
			max = lanCable[i];
	}

	high = max;
	while (low <= high) {
		count = 0;
		mid = (low + high) / 2;
		for (int i = 0;i < K;i++)
			count += lanCable[i] / mid;
		if (count >= N) {
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