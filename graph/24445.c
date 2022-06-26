#include<stdio.h>
#include<stdlib.h>

int** adjList, * index, * visited, queue[100001], front = 0, rear = 0, order = 1;

int compare(const void*, const void*);
void bfs(int);
void addq(int);
int deleteq();

int main() {
	int N = 0, M = 0, R = 0, n1 = 0, n2 = 0;

	scanf("%d %d %d", &N, &M, &R);
	index = (int*)calloc(N + 1, sizeof(int));
	visited = (int*)calloc(N + 1, sizeof(int));
	adjList = (int**)calloc(N + 1, sizeof(int*));
	for (int i = 0;i < M;i++) {
		scanf("%d %d", &n1, &n2);
		adjList[n1] = (int*)realloc(adjList[n1], sizeof(int) * (index[n1] + 1));
		adjList[n1][index[n1]] = n2;
		index[n1]++;
		adjList[n2] = (int*)realloc(adjList[n2], sizeof(int) * (index[n2] + 1));
		adjList[n2][index[n2]] = n1;
		index[n2]++;
	}

	for (int i = 1;i <= N;i++)
		qsort(adjList[i], index[i], sizeof(int), compare);

	bfs(R);

	for (int i = 1;i <= N;i++)
		printf("%d\n", visited[i]);

	for (int i = 1;i <= N;i++)
		free(adjList[i]);
	free(adjList);
	free(visited);
	free(index);
	return 0;
}

int compare(const void* a, const void* b) {
	return *(int*)b - *(int*)a;
}

void bfs(int v) {
	int temp = 0;

	visited[v] = order++;
	addq(v);
	while (front != rear) {
		temp = deleteq();
		for (int i = 0;i < index[temp];i++) {
			if (!visited[adjList[temp][i]]) {
				visited[adjList[temp][i]] = order++;
				addq(adjList[temp][i]);
			}
		}
	}
}

void addq(int v) {
	if ((rear + 1) % 100001 == front)
		exit(EXIT_FAILURE);
	rear = (rear + 1) % 100001;
	queue[rear] = v;
}

int deleteq() {
	if (front == rear)
		exit(EXIT_FAILURE);
	front = (front + 1) % 100001;
	return queue[front];
}