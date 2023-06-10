#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char answer[5] = { 'D', 'C', 'B', 'A', 'E' };
	int input = 0, cnt = 0;

	for (int i = 0;i < 3;i++) {
		cnt = 0;

		for (int j = 0;j < 4;j++) {
			cin >> input;

			if (input)
				cnt++;
		}

		cout << answer[cnt] << '\n';
	}
	return 0;
}
