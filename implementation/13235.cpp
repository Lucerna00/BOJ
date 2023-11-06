#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool check = true;
	int len = 0;
	string input;

	cin >> input;

	len = (int)(input.length());
	for (int i = 0;i < len / 2;i++) {
		if (input[i] != input[len - 1 - i])
			check = false;
	}

	if (check)
		cout << "true";
	else
		cout << "false";
	return 0;
}
