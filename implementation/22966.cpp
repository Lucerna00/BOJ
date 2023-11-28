#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, l = 0, minL = 5;
	string input, answer;

	cin >> N;
	while (N--) {
		cin >> input >> l;

		if (l < minL) {
			minL = l;
			answer = input;
		}
	}

	cout << answer;
	return 0;
}
