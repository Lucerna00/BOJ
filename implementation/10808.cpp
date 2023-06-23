#include<iostream>
#include<string>

using namespace std;

int cnt[26];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	cin >> input;

	for (char i : input)
		cnt[i - 'a']++;

	for (int i : cnt)
		cout << i << " ";
	return 0;
}
