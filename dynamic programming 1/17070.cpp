#include<iostream>

#define HORIZONTAL 0
#define VERTICAL 1
#define DIAGONAL 2

using namespace std;

int house[16][16], dp[3][16][16];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++)
			cin >> house[i][j];
	}

	dp[HORIZONTAL][0][1] = 1;
	for (int i = 0;i < N;i++) {
		for (int j = 2;j < N;j++) {
			if (!house[i][j]) {
				dp[HORIZONTAL][i][j] = dp[HORIZONTAL][i][j - 1] + dp[DIAGONAL][i][j - 1];
				if (i > 0) {
					dp[VERTICAL][i][j] = dp[VERTICAL][i - 1][j] + dp[DIAGONAL][i - 1][j];
					if (!house[i - 1][j] && !house[i][j - 1])
						dp[DIAGONAL][i][j] = dp[HORIZONTAL][i - 1][j - 1] + dp[VERTICAL][i - 1][j - 1] + dp[DIAGONAL][i - 1][j - 1];
				}
			}
		}
	}

	cout << dp[HORIZONTAL][N - 1][N - 1] + dp[VERTICAL][N - 1][N - 1] + dp[DIAGONAL][N - 1][N - 1];
	return 0;
}