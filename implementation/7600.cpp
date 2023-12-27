#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	while (getline(cin, input), input != "#") {
		bool checked[26] = { false, };
		int answer = 0;

		for (char i : input) {
			if (i >= 'A' && i <= 'Z' && !checked[i - 'A']) {
				checked[i - 'A'] = true;
				answer++;
			}
			else if (i >= 'a' && i <= 'z' && !checked[i - 'a']) {
				checked[i - 'a'] = true;
				answer++;
			}
		}

		cout << answer << '\n';
	}
	return 0;
}
