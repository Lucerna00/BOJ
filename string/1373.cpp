#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len = 0, i = 0;
	string input;

	cin >> input;

	len = input.length();

	if (len % 3 == 1)
		cout << input[i++];
	else if (len % 3 == 2) {
		cout << (input[i] - '0') * 2 + (input[i + 1] - '0');

		i += 2;
	}
	for (;i <= len - 3;i += 3)
		cout << (input[i] - '0') * 4 + (input[i + 1] - '0') * 2 + (input[i + 2] - '0');
	return 0;
}
