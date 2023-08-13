#include<iostream>
#include<string>
#include<map>
#include<stack>

using namespace std;

map<char, int> m = { {'+', 0}, {'-', 0}, {'*', 1}, {'/', 1}, {'(', 2} };
stack<char> s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	cin >> input;

	for (char i : input) {
		if (i >= 'A' && i <= 'Z')
			cout << i;
		else if (i == ')') {
			while (s.top() != '(') {
				cout << s.top();

				s.pop();
			}
			s.pop();
		}
		else {
			while (!s.empty() && s.top() != '(' && m[s.top()] >= m[i]) {
				cout << s.top();

				s.pop();
			}
			s.push(i);
		}
	}
	while (!s.empty()) {
		cout << s.top();

		s.pop();
	}
	return 0;
}
