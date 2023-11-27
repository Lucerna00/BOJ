#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input = 0, answer = 0;

	while (cin >> input, input != -1)
		answer += input;

	cout << answer;
	return 0;
}
