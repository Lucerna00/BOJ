#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	string name;

	cin >> N;

	cin.ignore();
	while (N--) {
		getline(cin, name);

		istringstream is(name);
		string tok;

		getline(is, tok, ' ');

		cout << "god";
		while (getline(is, tok, ' '))
			cout << tok;
		cout << '\n';
	}
	return 0;
}
