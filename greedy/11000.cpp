#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

vector<pair<int, int>> schedule;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, S = 0, T = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> S >> T;
		schedule.push_back({ S, T });
	}

	sort(schedule.begin(), schedule.end());
	pq.push(schedule[0].second);
	for (int i = 1;i < N;i++) {
		if (schedule[i].first >= pq.top())
			pq.pop();
		pq.push(schedule[i].second);
	}

	cout << pq.size();
	return 0;
}
