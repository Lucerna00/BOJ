#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	struct node* left;
	char name;
	struct node* right;
} node;

node* list[26];

void preorder(node*);
void inorder(node*);
void postorder(node*);

int main() {
	char root = 0, left = 0, right = 0;
	int N = 0;
	node* newNode = NULL;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		newNode = (node*)malloc(sizeof(node));
		newNode->left = NULL;
		newNode->name = i + 65;
		newNode->right = NULL;
		list[i] = newNode;
	}
	for (int i = 0;i < N;i++) {
		getchar();
		scanf("%c %c %c", &root, &left, &right);
		if (left != 46)
			list[root - 65]->left = list[left - 65];
		if (right != 46)
			list[root - 65]->right = list[right - 65];
	}

	preorder(list[0]);
	printf("\n");
	inorder(list[0]);
	printf("\n");
	postorder(list[0]);

	for (int i = 0;i < N;i++)
		free(list[i]);
	return 0;
}

void preorder(node* ptr) {
	if (ptr) {
		printf("%c", ptr->name);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void inorder(node* ptr) {
	if (ptr) {
		inorder(ptr->left);
		printf("%c", ptr->name);
		inorder(ptr->right);
	}
}

void postorder(node* ptr) {
	if (ptr) {
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%c", ptr->name);
	}
}