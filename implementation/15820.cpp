#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int S1 = 0, S2 = 0, a = 0, b = 0;

	cin >> S1 >> S2;
	while (S1--) {
		cin >> a >> b;

		if (a != b) {
			cout << "Wrong Answer";
			return 0;
		}
	}
	while (S2--) {
		cin >> a >> b;

		if (a != b) {
			cout << "Why Wrong!!!";
			return 0;
		}
	}
	cout << "Accepted";
	return 0;
}
