#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = 1;
	string order;

	cin >> order;

	for (char c : order) {
		if (c == 'A')
			answer = (answer == 1 ? 2 : (answer == 2 ? 1 : answer));
		else if (c == 'B')
			answer = (answer == 2 ? 3 : (answer == 3 ? 2 : answer));
		else
			answer = (answer == 3 ? 1 : (answer == 1 ? 3 : answer));
	}

	cout << answer;
	return 0;
}
