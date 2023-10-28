#include<iostream>

using namespace std;

int position[4];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x = 0, y = 0, r = 0, answer = 0;

	for (int i = 0;i < 4;i++)
		cin >> position[i];
	cin >> x >> y >> r;

	for (int i = 0;i < 4;i++) {
		if (position[i] == x) {
			answer = i + 1;
			break;
		}
	}

	cout << answer;
	return 0;
}
