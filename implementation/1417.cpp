#include<iostream>
#include<queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, cnt = 0, otherCnt = 0, temp = 0, answer = 0;
	priority_queue<int> q;

	cin >> N;
	cin >> cnt;
	for (int i = 1;i < N;i++) {
		cin >> otherCnt;

		q.push(otherCnt);
	}

	while (!q.empty() && q.top() >= cnt) {
		temp = q.top();
		q.pop();
		q.push(temp - 1);
		cnt++;
		answer++;
	}

	cout << answer;
	return 0;
}
