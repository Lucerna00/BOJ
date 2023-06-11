#include<iostream>

using namespace std;

int basket[101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, i = 0, j = 0, k = 0;

	cin >> N >> M;
	while (M--) {
		cin >> i >> j >> k;

		for (;i <= j;i++)
			basket[i] = k;
	}

	for (int i = 1;i <= N;i++)
		cout << basket[i] << " ";
	return 0;
}
