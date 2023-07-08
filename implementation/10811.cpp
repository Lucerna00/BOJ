#include<iostream>
#include<algorithm>

using namespace std;

int basket[101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, i = 0, j = 0;

	cin >> N >> M;

	for (int i = 1;i <= N;i++)
		basket[i] = i;
	while (M--) {
		cin >> i >> j;

		while (i < j)
			swap(basket[i++], basket[j--]);
	}

	for (int i = 1;i <= N;i++)
		cout << basket[i] << " ";
	return 0;
}