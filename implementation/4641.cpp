#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input;

	while (cin >> input, input != -1) {
		int checked[100] = { 0, }, answer = 0;

		checked[input] = 1;
		while (cin >> input, input != 0)
			checked[input] = 1;

		for (int i = 1;i < 50;i++) {
			if (checked[i] && checked[i * 2])
				answer++;
		}
			
		cout << answer << '\n';
	}
	return 0;
}
