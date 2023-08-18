#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long X = 0;
	int N = 0, a = 0, b = 0;

	cin >> X;
	cin >> N;
	while (N--) {
		cin >> a >> b;

		X -= (a * b);
	}

	if (!X)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
