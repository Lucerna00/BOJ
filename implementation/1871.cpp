#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char input[9] = { 0, };
	int N = 0;

	cin >> N;
	while (N--) {
		cin >> input;

		if (abs((input[0] - 'A') * 26 * 26 + (input[1] - 'A') * 26 + input[2] - 'A' - atoi(&input[4])) <= 100)
			cout << "nice\n";
		else
			cout << "not nice\n";
	}
	return 0;
}
