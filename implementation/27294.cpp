#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, S = 0;

	cin >> T >> S;

	if ((T < 12 || T > 16) || S == 1)
		cout << 280;
	else
		cout << 320;
	return 0;
}
