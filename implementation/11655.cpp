#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	getline(cin, input);

	for (char i : input) {
		if (i >= 'A' && i <= 'Z')
			cout << (char)((i - 'A' + 13) % 26 + 'A');
		else if (i >= 'a' && i <= 'z')
			cout << (char)((i - 'a' + 13) % 26 + 'a');
		else
			cout << i;
	}
	return 0;
}
