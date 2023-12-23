#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	string input;

	cin >> N;
	cin.ignore();
	while (N--) {
		int score = 0;

		getline(cin, input);

		for (char i : input) {
			if (i >= 'A' && i <= 'Z')
				score += (i - 'A' + 1);
		}

		if (score == 100)
			cout << "PERFECT LIFE\n";
		else
			cout << score << '\n';
	}
	return 0;
}
