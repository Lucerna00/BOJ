#include<stdio.h>

int A[1000000], NGE[1000000], top = -1, result[1000000];

int main() {
	int N = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++)
		scanf("%d", &A[i]);

	for (int i = N - 1;i >= 0;) {
		if (top == -1) {
			NGE[++top] == A[i];
			result[i] = -1;
			i--;
		}
		else if (A[i] < A[i + 1]) {
			NGE[++top] = A[i + 1];
			result[i] = A[i + 1];
			i--;
		}
		else if (A[i] < NGE[top]) {
			result[i] = NGE[top];
			i--;
		}
		else
			top--;
	}

	for (int i = 0;i < N;i++)
		printf("%d ", result[i]);
	return 0;
}