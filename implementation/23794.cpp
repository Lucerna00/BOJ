#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	for (int i = 0;i < N + 2;i++) {
		for (int j = 0;j < N + 2;j++) {
			if (i >= 1 && i <= N && j >= 1 && j <= N)
				cout << ' ';
			else
				cout << '@';
		}
		cout << '\n';
	}
	return 0;
}
