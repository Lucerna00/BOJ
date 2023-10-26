#include<iostream>

using namespace std;

bool checked[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, K = 0, answer = 0;

	cin >> N >> M;
	for (int i = 0;i < M;i++) {
		cin >> K;

		for (int j = K;j <= N;j += K) {
			if (!checked[j]) {
				answer += j;
				checked[j] = true;
			}
		}
	}

	cout << answer;
	return 0;
}
