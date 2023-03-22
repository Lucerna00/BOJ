#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int, int>> jewels;
	vector<int> bags;
	priority_queue<int> pq;
	int N = 0, K = 0, M = 0, V = 0, C = 0, index = 0;
	long long answer = 0;

	cin >> N >> K;
	for (int i = 0;i < N;i++) {
		cin >> M >> V;
		jewels.push_back({ M,V });
	}
	for (int i = 0;i < K;i++) {
		cin >> C;
		bags.push_back(C);
	}

	sort(jewels.begin(), jewels.end());
	sort(bags.begin(), bags.end());
	for (int i = 0;i < K;i++) {
		while (index < N && jewels[index].first <= bags[i])
			pq.push(jewels[index++].second);
		if (!pq.empty()) {
			answer += pq.top();
			pq.pop();
		}
	}

	cout << answer;
	return 0;
}
