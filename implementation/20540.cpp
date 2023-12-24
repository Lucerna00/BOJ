#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	cin >> input;

	cout << (char)('E' + 'I' - input[0]) << (char)('S' + 'N' - input[1]) << (char)('T' + 'F' - input[2]) << (char)('J' + 'P' - input[3]);
	return 0;
}
