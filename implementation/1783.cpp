#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0;

	cin >> N >> M;

	if (N == 1)
		cout << 1;
	else if (N == 2)
		cout << min((M + 1) / 2, 4);
	else if (M < 7)
		cout << min(M, 4);
	else
		cout << M - 2;
	return 0;
}
