#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

vector<int> dist;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int W = 0, H = 0, N = 0, a = 0, b = 0, totalLen = 0, temp = 0, answer = 0;

	cin >> W >> H;
	cin >> N;
	for (int i = 0;i <= N;i++) {
		cin >> a >> b;

		switch (a) {
		case 2:
			b = 2 * W + H - b;
			break;
		case 3:
			b = 2 * W + 2 * H - b;
			break;
		case 4:
			b += W;
			break;
		}
		dist.push_back(b);
	}

	totalLen = W * 2 + H * 2;
	for (int i = 0;i < N;i++) {
		temp = abs(dist[N] - dist[i]);
		answer += min(temp, totalLen - temp);
	}

	cout << answer;
}
