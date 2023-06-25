#include<iostream>
#include<string>

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

		cout << input[0] << input[input.length() - 1] << '\n';
	}
	return 0;
}
