#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, paper[100][100] = { 0, }, left = 0, bottom = 0, answer = 0;

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> left >> bottom;
		for (int j = bottom - 1;j < bottom + 9 && j < 100;j++) {
			for (int k = left - 1;k < left + 9 && k < 100;k++) {
				if (paper[j][k] == 0) {
					paper[j][k] = 1;
					answer++;
				}
			}
		}
	}

	cout << answer;
	return 0;
}