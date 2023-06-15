#include<iostream>

using namespace std;

char room[100][101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, hCnt = 0, hAns = 0, vCnt = 0, vAns = 0;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> room[i];

	for (int i = 0;i < N;i++) {
		hCnt = 0;
		for (int j = 0;j < N;j++) {
			if (room[i][j] == '.')
				hCnt++;
			else {
				if (hCnt >= 2)
					hAns++;
				hCnt = 0;
			}
		}
		if (hCnt >= 2)
			hAns++;
	}
	for (int i = 0;i < N;i++) {
		vCnt = 0;
		for (int j = 0;j < N;j++) {
			if (room[j][i] == '.')
				vCnt++;
			else {
				if (vCnt >= 2)
					vAns++;
				vCnt = 0;
			}
		}
		if (vCnt >= 2)
			vAns++;
	}

	cout << hAns << " " << vAns;
	return 0;
}
