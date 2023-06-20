#include<iostream>
#include<algorithm>

using namespace std;

int barket[101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, i = 0, j = 0;

	cin >> N >> M;

	for (int i = 1;i <= N;i++)
		barket[i] = i;

	for (int k = 0;k < M;k++) {
		cin >> i >> j;

		swap(barket[i], barket[j]);
	}

	for (int i = 1;i <= N;i++)
		cout << barket[i] << " ";
	return 0;
}
