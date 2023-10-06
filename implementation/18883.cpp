#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0;

	cin >> N >> M;

	for (int i = 1;i <= N * M;i++) {
		cout << i;
		if (i % M == 0)
			cout << '\n';
		else
			cout << ' ';
	}
	return 0;
}
