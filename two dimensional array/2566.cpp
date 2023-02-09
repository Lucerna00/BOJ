#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input = 0, max = 0, x = 0, y = 0;

	for (int i = 1;i <= 9;i++) {
		for (int j = 1;j <= 9;j++) {
			cin >> input;
			if (input >= max) {
				max = input;
				x = j;
				y = i;
			}
		}
	}

	cout << max << endl << y << " " << x;
	return 0;
}
