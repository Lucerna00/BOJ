#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int inputList[500000];
int freqList[8001];

int compare(const void*, const void*);
int frequency();

int main() {
	int N = 0;
	double sum = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%d", &inputList[i]);
		sum += inputList[i];
		freqList[inputList[i] + 4000]++;
	}

	printf("%d\n", (int)round(sum / N));

	qsort(inputList, N, sizeof(int), compare);
	printf("%d\n", inputList[N / 2]);

	printf("%d\n", frequency());

	printf("%d\n", inputList[N - 1] - inputList[0]);
	return 0;
}

int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

int frequency() {
	int max = 0, flag = 0;

	for (int i = 0;i < 8001;i++) {
		if (freqList[i] > max) {
			max = freqList[i];
			flag = i;
		}
	}
	for (int i = flag + 1;i < 8001;i++) {
		if (freqList[i] == max) {
			flag = i;
			break;
		}
	}
	return flag - 4000;
}
