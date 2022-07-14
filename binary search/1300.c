#include<stdio.h>

int main() {
	int N = 0, k = 0, low = 1, mid = 0, high = 0, count = 0, answer = 0;

	scanf("%d %d", &N, &k);

	high = k;
	while (low <= high) {
		mid = (low + high) / 2;
		count = 0;
		for (int i = 1;i <= N;i++)
			count += (mid / i < N) ? (mid / i) : N;
		if (count >= k) {
			high = mid - 1;
			answer = mid;
		}
		else
			low = mid + 1;
	}

	printf("%d", answer);
	return 0;
}