#include<iostream>

using namespace std;

char floor[50][50];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, k = 0, answer = 0;

	cin >> N >> M;
	for (int i = 0;i < N;i++)
		cin >> floor[i];

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			if (floor[i][j] == '-') {
				answer++;
				k = j;
				while (k < M && floor[i][k] == '-')
					floor[i][k++] = 0;
			}
			else if (floor[i][j] == '|') {
				answer++;
				k = i;
				while (k < N && floor[k][j] == '|')
					floor[k++][j] = 0;
			}
		}
	}

	cout << answer;
	return 0;
}
