#include<stdio.h>
#include<math.h>

int heap[100001], size;

void push(int);
int pop();
void adjust();

int main() {
	int N = 0, x = 0;

	scanf("%d", &N);
	for (;N;N--) {
		scanf("%d", &x);
		if (x)
			push(x);
		else
			printf("%d\n", pop());
	}
	return 0;
}

void push(int x) {
	int temp = ++size;

	while (temp > 1) {
		if (abs(x) > abs(heap[temp / 2]) || (abs(x) == abs(heap[temp / 2]) && x > heap[temp / 2]))
			break;
		heap[temp] = heap[temp / 2];
		temp /= 2;
	}
	heap[temp] = x;
}

int pop() {
	int temp = heap[1];

	if (!size)
		return 0;
	heap[1] = heap[size--];
	adjust();
	return temp;
}

void adjust() {
	int temp = heap[1], child = 2;

	while (child <= size) {
		if (child < size && (abs(heap[child]) > abs(heap[child + 1]) || (abs(heap[child]) == abs(heap[child + 1]) && heap[child] > heap[child + 1])))
			child++;
		if (abs(temp) < abs(heap[child]) || (abs(temp) == abs(heap[child]) && temp < heap[child]))
			break;
		heap[child / 2] = heap[child];
		child *= 2;
	}
	heap[child / 2] = temp;
}
