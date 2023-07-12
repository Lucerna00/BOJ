#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cntJOI = 0, cntIOI = 0;
	string input;

	cin >> input;

	for (int i = 0;i < input.length() - 2;i++) {
		if (input.substr(i, 3) == "JOI")
			cntJOI++;
		else if (input.substr(i, 3) == "IOI")
			cntIOI++;
	}

	cout << cntJOI << '\n' << cntIOI;
	return 0;
}
