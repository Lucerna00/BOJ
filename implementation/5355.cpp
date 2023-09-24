#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	double num = 0;
	string op;

	cout << fixed;
	cout.precision(2);

	cin >> T;
	while (T--) {
		cin >> num;
		getline(cin, op);

		for (int i = 1;i < (int)op.length();i += 2) {
			switch (op[i]) {
			case '@':
				num *= 3;
				break;
			case '%':
				num += 5;
				break;
			case '#':
				num -= 7;
				break;
			}
		}

		cout << num << '\n';
	}
	return 0;
}
