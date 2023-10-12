#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int C = 0, answer = 1;

	for (cin >> C;C - 1;C = (C % 2 ? 3 * C + 1 : C / 2))
		answer++;

	cout << answer;
	return 0;
}