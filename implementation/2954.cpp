#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	getline(cin, input);

	for (int i = 0;i < (int)(input.length());i++) {
		cout << input[i];

		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
			i += 2;
	}
	return 0;
}