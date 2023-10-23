#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int plain_len = 0, encryption_len = 0;
	string plain, encryption;

	getline(cin, plain);
	getline(cin, encryption);

	plain_len = plain.length();
	encryption_len = encryption.length();

	for (int i = 0;i < plain_len;i++) {
		if (plain[i] == ' ')
			cout << plain[i];
		else
			cout << (char)('a' + (plain[i] - encryption[i % encryption_len] + 25) % 26);
	}
	return 0;
}
