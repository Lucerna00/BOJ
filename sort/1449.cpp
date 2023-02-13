#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, L = 0, pipe[1000] = { 0, }, i = 0, j = 0, answer = 1;

	cin >> N >> L;
	for (int i = 0;i < N;i++)
		cin >> pipe[i];

	sort(pipe, pipe + N);
	while (i < N && j < N) {
		if (pipe[j] - pipe[i] <= L - 1)
			j++;
		else {
			i = j;
			answer++;
		}
	}

	cout << answer;
	return 0;
}
