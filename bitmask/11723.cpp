#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string cmd;
	int M = 0, x = 0, bit = 0;

	cin >> M;

	while (M--) {
		cin >> cmd;

		if (cmd.compare("all") == 0)
			bit = (1 << 21) - 1;
		else if (cmd.compare("empty") == 0)
			bit = 0;
		else {
			cin >> x;

			if (cmd.compare("add") == 0)
				bit |= (1 << x);
			else if (cmd.compare("remove") == 0)
				bit &= ~(1 << x);
			else if (cmd.compare("check") == 0) {
				if (bit & (1 << x))
					cout << 1 << '\n';
				else
					cout << 0 << '\n';
			}
			else if (cmd.compare("toggle") == 0)
				bit ^= (1 << x);
		}
	}
	return 0;
}
