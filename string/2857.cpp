#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 0;
	string input;

	for (int i = 0;i < 5;i++) {
		cin >> input;

		for (int j = 0;j < (int)input.length() - 2;j++) {
			if (input.substr(j, 3) == "FBI") {
				cout << i + 1 << " ";
				cnt++;
				break;
			}
		}
	}

	if (!cnt)
		cout << "HE GOT AWAY!";
	return 0;
}
