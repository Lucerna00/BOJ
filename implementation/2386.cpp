#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char alphabet = 0;
	string input;

	while (cin >> alphabet, alphabet != '#') {
		int answer = 0;

		getline(cin, input);

		for (char i : input) {
			if (i >= 'A' && i <= 'Z')
				i = (i - 'A' + 'a');
			if (i == alphabet)
				answer++;
		}

		cout << alphabet << ' ' << answer << '\n';
	}
	return 0;
}
