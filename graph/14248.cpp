#include<iostream>
#include<queue>

using namespace std;

bool visited[100001];
int A[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, s = 0, x = 0, nx = 0, answer = 0;
	queue<int> q;

	cin >> n;
	for (int i = 1;i <= n;i++)
		cin >> A[i];
	cin >> s;

	q.push(s);
	visited[s] = true;
	answer++;
	while (!q.empty()) {
		x = q.front();
		q.pop();
		nx = x - A[x];
		if (nx >= 1 && nx <= n && !visited[nx]) {
			q.push(nx);
			visited[nx] = true;
			answer++;
		}
		nx = x + A[x];
		if (nx >= 1 && nx <= n && !visited[nx]) {
			q.push(nx);
			visited[nx] = true;
			answer++;
		}
	}

	cout << answer;
	return 0;
}
