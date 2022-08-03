#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0;
	long long p[101] = { 0,1,1,1,2,2, };

	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 6;i <= N;i++)
			p[i] = p[i - 1] + p[i - 5];
		cout << p[N] << '\n';
	}
	return 0;
}