#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, A = 0, min = 1000000, max = 0;

	cin >> N;
	while (N--) {
		cin >> A;
		if (A < min)
			min = A;
		if (A > max)
			max = A;
	}
	cout << min * max;
	return 0;
}