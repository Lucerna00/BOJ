#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	string X;

	cin >> T;
	while (T--) {
		int checked[10] = { 0, };
		int answer = 0;

		cin >> X;

		for (char i : X)
			answer += (checked[i - '0']++ == 0);

		cout << answer << '\n';
	}
	return 0;
}
