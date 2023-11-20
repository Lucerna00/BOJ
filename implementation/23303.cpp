#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool flag = false;
	string input;

	getline(cin, input);

	for (int i = 0;i < (int)(input.length()) - 1;i++) {
		if ((input[i] == 'd' || input[i] == 'D') && input[i + 1] == '2') {
			flag = true;
			break;
		}
	}

	if (flag)
		cout << "D2";
	else
		cout << "unrated";
	return 0;
}