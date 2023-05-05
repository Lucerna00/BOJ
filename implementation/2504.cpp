#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool pair = false;
	int temp = 1, result = 0;
	string input;
	stack<char> s;

	cin >> input;

	for (char c : input) {
		if (c == '(') {
			temp *= 2;
			pair = true;
			s.push('(');
		}
		else if (c == '[') {
			temp *= 3;
			pair = true;
			s.push('[');
		}
		else if (!s.empty() && s.top() == '(' && c == ')') {
			if (pair) {
				result += temp;
				pair = false;
			}
			temp /= 2;
			s.pop();
		}
		else if (!s.empty() && s.top() == '[' && c == ']') {
			if (pair) {
				result += temp;
				pair = false;
			}
			temp /= 3;
			s.pop();
		}
		else {
			cout << 0;
			return 0;
		}
	}

	if (!s.empty())
		cout << 0;
	else
		cout << result;
	return 0;
}
