#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int R = 0, C = 0, A = 0, B = 0;

	cin >> R >> C;
	cin >> A >> B;

	for (int i = 0;i < R;i++) {
		for (int j = 0;j < A;j++) {
			for (int k = 0;k < C;k++) {
				for (int l = 0;l < B;l++) {
					if ((i + k) % 2 == 0)
						cout << 'X';
					else
						cout << '.';

				}
			}
			cout << '\n';
		}
	}
	return 0;
}