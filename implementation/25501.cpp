#include<iostream>
#include<string>

using namespace std;

int cnt;

int recursion(string&, int, int);
int isPalindrome(string&);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	string input;

	cin >> T;
	while (T--) {
		cin >> input;

		cnt = 0;

		cout << isPalindrome(input) << " " << cnt << '\n';
	}
	return 0;
}

int recursion(string& s, int l, int r) {
	cnt++;
	if (l >= r)
		return 1;
	else if (s[l] != s[r])
		return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(string& s) {
	return recursion(s, 0, s.length() - 1);
}
