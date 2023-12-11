#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int P = 0;

	cin >> P;
	while (P--) {
		string input;
		map<string, int, greater<string>> answer = { {"TTT", 0}, {"TTH", 0}, {"THT", 0}, {"THH", 0}, {"HTT", 0}, {"HTH", 0}, {"HHT", 0}, {"HHH", 0} };

		cin >> input;

		for (int i = 0;i < (int)(input.length()) - 2;i++)
			answer[input.substr(i, 3)]++;

		for (auto i : answer)
			cout << i.second << ' ';
		cout << '\n';
	}
	return 0;
}
