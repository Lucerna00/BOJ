#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len = 0;
	string input[5];

	for (int i = 0; i < 5; i++) {
		cin >> input[i];

		len = max(len, (int)input[i].length());
	}


	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 5; j++) {
			if (i < (int)input[j].length())
				cout << input[j][i];
		}
	}
	return 0;
}
