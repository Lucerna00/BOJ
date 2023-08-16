#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int M, hCnt, cCnt, answer = 32500;
vector<pair<int, int>> house, chicken;
vector<vector<int>> dist;
vector<int> picked;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, num = 0;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> num;

			if (num == 1)
				house.push_back({ j, i });
			else if (num == 2)
				chicken.push_back({ j, i });
		}
	}

	hCnt = (int)house.size();
	cCnt = (int)chicken.size();
	dist.resize(hCnt, vector<int>(cCnt));
	for (int i = 0; i < hCnt; i++) {
		for (int j = 0; j < cCnt; j++)
			dist[i][j] = abs(house[i].first - chicken[j].first) + abs(house[i].second - chicken[j].second);
	}
	picked.resize(M);
	dfs(0, 0);

	cout << answer;
	return 0;
}

void dfs(int start, int pCnt) {
	if (pCnt == M) {
		int sum = 0;

		for (int i = 0; i < hCnt; i++) {
			int temp = 2500;

			for (int j = 0; j < M; j++)
				temp = min(temp, dist[i][picked[j]]);
			sum += temp;
		}
		answer = min(answer, sum);
	}
	else {
		for (int i = start; i < cCnt; i++) {
			picked[pCnt] = i;
			dfs(i + 1, pCnt + 1);
		}
	}
}
