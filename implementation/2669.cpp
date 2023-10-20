#include<iostream>

using namespace std;

int plane[101][101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x1 = 0, y1 = 0, x2 = 0, y2 = 0, answer = 0;

	for (int i = 0;i < 4;i++) {
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = y1;j < y2;j++) {
			for (int k = x1;k < x2;k++)
				plane[j][k] = 1;
		}
	}

	for (int i = 1;i < 101;i++) {
		for (int j = 1;j < 101;j++) {
			if (plane[i][j])
				answer++;
		}
	}

	cout << answer;
	return 0;
}
