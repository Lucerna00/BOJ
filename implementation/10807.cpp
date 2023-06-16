#include<iostream>

using namespace std;

int cnt[201];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, num = 0, v = 0;

	cin >> N;
	while (N--) {
		cin >> num;

		cnt[num + 100]++;
	}
	cin >> v;

	cout << cnt[v + 100];
	return 0;
}
