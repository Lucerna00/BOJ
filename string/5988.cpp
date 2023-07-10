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
	while (N--) {
		cin >> input;

		if ((input[input.length() - 1] - '0') % 2 == 0)
			cout << "even\n";
		else
			cout << "odd\n";
	}
	return 0;
}
