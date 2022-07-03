#include<stdio.h>

int priceList[100000];
long long lenList[99999];

int main() {
	int N = 0, minPrice = 0;
	long long result = 0;

	scanf("%d", &N);
	for (int i = 0;i < N - 1;i++)
		scanf("%lld", &lenList[i]);
	for (int i = 0;i < N;i++)
		scanf("%d", &priceList[i]);

	minPrice = priceList[0];
	for (int i = 0;i < N - 1;i++) {
		if (priceList[i] < minPrice)
			minPrice = priceList[i];
		result += (lenList[i] * minPrice);
	}

	printf("%lld", result);
	return 0;
}