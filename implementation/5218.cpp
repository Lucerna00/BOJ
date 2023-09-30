#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	string input1, input2;

	cin >> T;
	while (T--) {
		cin >> input1 >> input2;

		cout << "Distances: ";
		for (int i = 0;i < (int)(input1.length());i++)
			cout << (input2[i] - input1[i] + 26) % 26 << ' ';
		cout << '\n';
	}
	return 0;
}
