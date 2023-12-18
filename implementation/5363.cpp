#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

vector<string> split(string, char);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	string input, token;
	vector<string> result;

	cin >> N;
	cin.ignore();
	while (N--) {
		getline(cin, input);

		result = split(input, ' ');

		for (int i = 2;i < result.size();i++)
			cout << result[i] << ' ';
		cout << result[0] << ' ' << result[1] << '\n';
	}
	return 0;
}

vector<string> split(string str, char delimiter) {
	istringstream iss(str);
	string buffer;
	vector<string> result;

	while (getline(iss, buffer, delimiter))
		result.push_back(buffer);

	return result;
}
