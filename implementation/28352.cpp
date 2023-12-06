#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 6;

	cin >> N;

	for (int i = 11;i <= N;i++)
		answer *= i;

	cout << answer;
	return 0;
}