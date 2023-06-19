#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char state = 0;
	int answer = 0;

	for (int i = 0;i < 8; i++) {
		for (int j = 0;j < 8;j++) {
			cin >> state;

			if (state == 'F' && ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)))
				answer++;
		}
	}

	cout << answer;
	return 0;
}
