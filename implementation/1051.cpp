#include<iostream>
#include<algorithm>

using namespace std;

char input[51][51];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, answer = 0;

	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		cin >> input[i];
	}

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			for (int k = 0;k < M - j;k++) {
				if (i + k < N && input[i][j] == input[i][j + k] && input[i][j] == input[i + k][j] && input[i][j] == input[i + k][j + k])
					answer = max(answer, (k + 1) * (k + 1));
			}
		}
	}

	cout << answer;
	return 0;
}
