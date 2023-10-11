#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int Br = 0, Bc = 0, Dr = 0, Dc = 0, Jr = 0, Jc = 0, B = 0, D = 0;

	cin >> Br >> Bc;
	cin >> Dr >> Dc;
	cin >> Jr >> Jc;

	B = max(abs(Jr - Br), abs(Jc - Bc));
	D = abs(Jr - Dr) + abs(Jc - Dc);

	if (B > D)
		cout << "daisy";
	else if (B == D)
		cout << "tie";
	else
		cout << "bessie";
	return 0;
}
