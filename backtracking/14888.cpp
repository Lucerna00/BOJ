#include<iostream>
#include<algorithm>

using namespace std;

int N = 0, A[100], oper[4], ansMax = -1000000000, ansMin = 1000000000;

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> A[i];
	cin >> oper[0] >> oper[1] >> oper[2] >> oper[3];

	dfs(1, A[0]);

	cout << ansMax << '\n' << ansMin;
	return 0;
}

void dfs(int K, int result) {
	if (K == N) {
		ansMax = max(ansMax, result);
		ansMin = min(ansMin, result);
	}
	else {
		for (int i = 0;i < 4;i++) {
			if (!oper[i])
				continue;
			oper[i]--;
			if (i == 0)
				dfs(K + 1, result + A[K]);
			else if (i == 1)
				dfs(K + 1, result - A[K]);
			else if (i == 2)
				dfs(K + 1, result * A[K]);
			else
				dfs(K + 1, result / A[K]);
			oper[i]++;
		}
	}
}