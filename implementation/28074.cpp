#include<iostream>
#include<string>

using namespace std;

bool check[26];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	cin >> input;

	for (char i : input)
		check[i - 'A'] = true;

	if (check['M' - 'A'] && check['O' - 'A'] && check['B' - 'A'] && check['I' - 'A'] && check['S' - 'A'])
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
