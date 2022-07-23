#include<iostream>
#include<string>
#include<set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len = 0;
	string input, str = "";
	set<string> strSet;

	cin >> input;
	len = input.length();
	for (int i = 0;i < len;i++) {
		str = "";
		for (int j = i;j < len;j++) {
			str += input[j];
			strSet.insert(str);
		}
	}

	cout << strSet.size();
	return 0;
}