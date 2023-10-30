#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	while (cin >> input, input != "#") {
		int len = input.length(), cnt = 0;

		for (int i = 0;i < len;i++) {
			if (i == len - 1) {
				if ((input[i] == 'o' && cnt % 2 == 0) || (input[i] == 'e' && cnt % 2 == 1))
					cout << '1';
				else
					cout << '0';
			}
			else
				cout << input[i];

			if (input[i] == '1')
				cnt++;
		}

		cout << '\n';
	}
	return 0;
}
