#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, h = 0, max_h = 0, a = 0, max_a = 0;

	cin >> N >> M;

	for (int i = 0;i < N;i++) {
		cin >> h;

		max_h = max(max_h, h);
	}
	for (int i = 0;i < M;i++) {
		cin >> a;

		max_a = max(max_a, a);
	}

	cout << max_h + max_a;
	return 0;
}
