#include<iostream>

using namespace std;

long long cnt[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, temp = 0;
	long long sum = 0, answer = 0;

	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		cin >> temp;
		sum += temp;
		cnt[sum % M]++;
	}

	cnt[0]++;
	for (int i = 0;i < M;i++)
		answer += cnt[i] * (cnt[i] - 1) / 2;

	cout << answer;
	return 0;
}