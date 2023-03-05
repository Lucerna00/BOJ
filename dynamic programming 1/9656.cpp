#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	if (N % 2 == 0)
		cout << "SK";
	else
		cout << "CY";
	return 0;
}
