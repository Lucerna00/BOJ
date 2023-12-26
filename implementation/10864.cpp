#include<iostream>

using namespace std;

int cnt[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, A = 0, B = 0;

	cin >> N >> M;
	while (M--) {
		cin >> A >> B;

		cnt[A]++;
		cnt[B]++;
	}

	for (int i = 1;i <= N;i++)
		cout << cnt[i] << '\n';
	return 0;
}
