#include<stdio.h>
#include<stdlib.h>

typedef struct time {
	int start;
	int end;
} time;

time timeList[100000];

int compare(const void*, const void*);

int main() {
	int N = 0, end = 0, count = 1;

	scanf("%d", &N);
	for (int i = 0;i < N;i++)
		scanf("%d %d", &(timeList[i].start), &(timeList[i].end));

	qsort(timeList, N, sizeof(time), compare);

	end = timeList[0].end;
	for (int i = 1;i < N;i++) {
		if (timeList[i].start >= end) {
			count++;
			end = timeList[i].end;
		}
	}

	printf("%d", count);
	return 0;
}

int compare(const void* a, const void* b) {
	if (((time*)a)->end < ((time*)b)->end)
		return -1;
	else if (((time*)a)->end > ((time*)b)->end)
		return 1;
	else {
		if (((time*)a)->start < ((time*)b)->start)
			return -1;
		else if (((time*)a)->start > ((time*)b)->start)
			return 1;
		else
			return 0;
	}
}