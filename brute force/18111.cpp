#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int blocks[257];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, B = 0, h = 0, minH = 256, maxH = 0, tempB = 0, tempT = 0, temp = 0, ansT = 1000000000, ansH = 0;

	cin >> N >> M >> B;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			cin >> h;

			blocks[h]++;
			minH = min(minH, h);
			maxH = max(maxH, h);
		}
	}

	for (int i = minH;i <= maxH;i++) {
		tempB = B;
		tempT = 0;
		for (int j = minH;j <= maxH;j++) {
			temp = blocks[j] * abs(i - j);
			if (j < i) {
				tempB -= temp;
				tempT += temp;
			}
			else if (j > i) {
				tempB += temp;
				tempT += 2 * temp;
			}
		}
		if (tempB >= 0 && tempT <= ansT) {
			ansT = tempT;
			ansH = i;
		}
	}

	cout << ansT << " " << ansH;
	return 0;
}
