#include<iostream>

using namespace std;

int h[100000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, maxH = 0, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> h[i];

	for (int i = N - 1;i >= 0;i--) {
		if (h[i] > maxH) {
			maxH = h[i];
			answer++;
		}
	}

	cout << answer;
	return 0;
}
