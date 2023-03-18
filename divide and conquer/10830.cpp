#include<iostream>

using namespace std;

int N, A[5][5], answer[5][5];

void mul(int(*)[5], int(*)[5]);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long B = 0;

	cin >> N >> B;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++)
			cin >> A[i][j];
		answer[i][i] = 1;
	}

	while (B) {
		if (B % 2 == 1)
			mul(answer, A);
		mul(A, A);
		B /= 2;
	}

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++)
			cout << answer[i][j] << " ";
		cout << '\n';
	}
	return 0;
}

void mul(int(*x)[5], int(*y)[5]) {
	int temp[5][5] = { 0, };

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			for (int k = 0;k < N;k++)
				temp[i][j] += (x[i][k] * y[k][j]);
			temp[i][j] %= 1000;
		}
	}
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++)
			x[i][j] = temp[i][j];
	}
}
