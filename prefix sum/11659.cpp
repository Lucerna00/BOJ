#include<iostream>
using namespace std;

int list[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, num = 0, i = 0, j = 0;

	cin >> N >> M;
	for (int i = 1;i <= N;i++) {
		cin >> num;
		list[i] = list[i - 1] + num;
	}
	while (M--) {
		cin >> i >> j;
		cout << list[j] - list[i - 1] << '\n';
	}
	return 0;
}