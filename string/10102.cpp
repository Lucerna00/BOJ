#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int V = 0, cntA = 0, cntB = 0;
	string input;

	cin >> V;
	cin >> input;

	for (char i : input) {
		if (i == 'A')
			cntA++;
		else
			cntB++;
	}

	if (cntA > cntB)
		cout << 'A';
	else if (cntA < cntB)
		cout << 'B';
	else
		cout << "Tie";
	return 0;
}
