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

		if (input[0] == 'A' && input[1] == 'l')
			cout << "204\n";
		else if (input[0] == 'D')
			cout << "207\n";
		else if (input[0] == 'C')
			cout << "B101\n";
		else if (input[0] == 'N')
			cout << "303\n";
		else if (input[0] == 'S')
			cout << "501\n";
		else if (input[0] == 'T')
			cout << "105\n";
		else
			cout << "302\n";
	}
	return 0;
}
