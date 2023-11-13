#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	string encypt, rule;

	cin >> T;
	cin.ignore();
	while (T--) {
		getline(cin, encypt);
		getline(cin, rule);

		for (char i : encypt) {
			if (i >= 'A' && i <= 'Z')
				cout << rule[i - 'A'];
			else
				cout << i;
		}
		cout << '\n';
	}
	return 0;
}
