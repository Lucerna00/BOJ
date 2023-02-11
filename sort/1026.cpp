#include<iostream>
#include<algorithm>

using namespace std;

bool cmp(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, A[50] = { 0, }, B[50] = { 0, }, S = 0;;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> A[i];
	for (int i = 0;i < N;i++)
		cin >> B[i];

	sort(A, A + N, cmp);
	sort(B, B + N);
	for (int i = 0;i < N;i++)
		S += (A[i] * B[i]);

	cout << S;
	return 0;
}

bool cmp(int a, int b) {
	return a > b;
}
