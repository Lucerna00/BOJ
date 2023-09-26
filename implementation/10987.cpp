#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = 0;
	string input;

	cin >> input;

	for (char c : input) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			answer++;
	}

	cout << answer;
	return 0;
}
