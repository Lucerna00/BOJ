#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int vertex;
	struct node* link;
} node;

int visited[100001], result[100001];
node* adjList[100001];

void insert(int, int);
void dfs(int);

int main() {
	int N = 0, n1 = 0, n2 = 0;
	node* ptr = NULL, * temp = NULL;

	scanf("%d", &N);
	for (int i = 0;i < N - 1;i++) {
		scanf("%d %d", &n1, &n2);
		insert(n1, n2);
		insert(n2, n1);
	}

	dfs(1);

	for (int i = 2;i <= N;i++)
		printf("%d\n", result[i]);

	for (int i = 1;i <= N;i++) {
		ptr = adjList[i];
		while (ptr) {
			temp = ptr->link;
			free(ptr);
			ptr = temp;
		}
	}
	return 0;
}

void insert(int n1, int n2) {
	node* newNode = NULL;

	newNode = (node*)malloc(sizeof(node));
	newNode->vertex = n2;
	newNode->link = adjList[n1];
	adjList[n1] = newNode;
}

void dfs(int v) {
	visited[v] = 1;
	for (node* ptr = adjList[v];ptr;ptr = ptr->link) {
		if (!visited[ptr->vertex]) {
			result[ptr->vertex] = v;
			dfs(ptr->vertex);
		}
	}
}