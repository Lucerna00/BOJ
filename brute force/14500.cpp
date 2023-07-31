#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int t[19][4][2] = { {{0,0},{1,0},{2,0},{3,0}}, {{0,0},{0,1},{0,2},{0,3}},
					{{0,0},{1,0},{0,1},{1,1}},
					{{0,0},{0,1},{0,2},{1,2}}, {{0,0},{1,0},{2,0},{0,1}}, {{0,0},{1,0},{1,1},{1,2}}, {{0,0},{1,0},{2,0},{2,-1}},
					{{0,0},{1,0},{0,1},{0,2}}, {{0,0},{0,1},{1,1},{2,1}}, {{0,0},{1,0},{1,-1},{1,-2}}, {{0,0},{1,0},{2,0},{2,1}},
					{{0,0},{0,1},{1,1},{1,2}}, {{0,0},{1,0},{1,-1},{2,-1}},
					{{0,0},{1,0},{1,-1},{0,1}}, {{0,0},{1,0},{1,1},{2,1}},
					{{0,0},{1,0},{2,0},{1,1}}, {{0,0},{-1,1},{0,1},{0,2}}, {{0,0},{1,0},{2,0},{1,-1}}, {{0,0},{0,1},{1,1},{0,2}} };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, x = 0, y = 0, temp = 0, answer = 0;

	cin >> N >> M;

	vector<vector<int>> paper(N, vector<int>(M));

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++)
			cin >> paper[i][j];
	}

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			for (int k = 0;k < 19;k++) {
				temp = 0;
				for (int l = 0;l < 4;l++) {
					x = j + t[k][l][0];
					y = i + t[k][l][1];
					if (!(x >= 0 && x < M && y >= 0 && y < N)) {
						temp = 0;
						break;
					}
					temp += paper[y][x];
				}
				answer = max(answer, temp);
			}
		}
	}

	cout << answer;
	return 0;
}
