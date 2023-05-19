#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	string input;

	cin >> T;
	while (T--) {
		cin >> input;

		string answer;
		answer = input;
		if (next_permutation(answer.begin(), answer.end()))
			cout << answer << '\n';
		else
			cout << input << '\n';
	}
	return 0;
}
