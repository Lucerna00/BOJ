#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 0;i < 5 * N;i++) {
		for (int j = 0;j < 5 * N;j++) {
			if ((i >= N && i < 4 * N) && (j >= N && j < 4 * N))
				cout << ' ';
			else
				cout << '@';
		}
		cout << '\n';
	}
	return 0;
}
