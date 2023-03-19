#include<iostream>
#include<queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int card[100000];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	int N = 0, size = 0, t1 = 0, t2 = 0, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> size;
		pq.push(size);
	}

	while (pq.size() > 1) {
		t1 = pq.top();
		pq.pop();
		t2 = pq.top();
		pq.pop();
		pq.push(t1 + t2);
		answer += (t1 + t2);
	}

	cout << answer;
	return 0;
}
