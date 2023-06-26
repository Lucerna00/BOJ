#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int R = 0, S = 0;

	cin >> R >> S;

	cout << S * 2 - R;
	return 0;
}
