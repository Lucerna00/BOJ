#include<stdio.h>

int LIS[1000000];

int main() {
	int N = 0, temp = 0, size = 0, low = 0, mid = 0, high = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%d", &temp);
		if (!size || temp > LIS[size - 1])
			LIS[size++] = temp;
		else {
			low = 0;
			high = size;
			while (low < high) {
				mid = (low + high) / 2;
				if (temp <= LIS[mid])
					high = mid;
				else
					low = mid + 1;
			}
			LIS[high] = temp;
		}
	}

	printf("%d", size);
	return 0;
}