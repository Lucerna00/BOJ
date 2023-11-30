#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	while (getline(cin, input), input != "#") {
		int answer = 0;

		for (int i = 0;i < (int)(input.length());i++) {
			if (input[i] != ' ')
				answer += (i + 1) * (input[i] - 'A' + 1);
		}

		cout << answer << '\n';
	}
	return 0;
}