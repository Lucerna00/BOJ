#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len = 0;
	string input;

	cin >> input;

	len = input.length();
	for (int i = 0;i < len / 2;i++) {
		if (input[i] != input[len - i - 1]) {
			cout << 0;
			return 0;
		}
	}

	cout << 1;
	return 0;
}
