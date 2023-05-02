#include<iostream>
#include<algorithm>

using namespace std;

typedef struct Shortcut {
	int start;
	int end;
	int dist;
};

int dp[10001];

bool cmp(Shortcut, Shortcut);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, D = 0, index = 0;
	Shortcut shortcut[12];

	cin >> N >> D;
	for (int i = 0;i < N;i++)
		cin >> shortcut[i].start >> shortcut[i].end >> shortcut[i].dist;

	sort(shortcut, shortcut + N, cmp);
	for (int i = 0;i <= D;i++)
		dp[i] = i;
	for (int i = 1;i <= D;) {
		dp[i] = min(dp[i], dp[i - 1] + 1);
		if (i == shortcut[index].end) {
			dp[i] = min(dp[i], dp[shortcut[index].start] + shortcut[index].dist);
			index++;
		}
		else
			i++;
	}

	cout << dp[D];
	return 0;
}

bool cmp(Shortcut a, Shortcut b) {
	return a.end < b.end;
}
