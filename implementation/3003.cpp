#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int chess[6] = { 1,1,2,2,2,8 }, cnt = 0;

	for (int i = 0;i < 6;i++) {
		cin >> cnt;

		cout << chess[i] - cnt << " ";
	}
	return 0;
}
