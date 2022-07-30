#include<iostream>

using namespace std;

int list[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, K = 0, num = 0, max = -10000000;

	cin >> N >> K;
	for (int i = 1;i <= N;i++) {
		cin >> num;
		list[i] = list[i - 1] + num;
	}

	for (int i = K;i <= N;i++) {
		if (list[i] - list[i - K] > max)
			max = list[i] - list[i - K];
	}

	cout << max;
	return 0;
}