#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a = 0, b = 0, c = 0;

	cin >> a >> b >> c;

	if (a + b == c)
		cout << a << '+' << b << '=' << c;
	else if (a - b == c)
		cout << a << '-' << b << '=' << c;
	else if (a * b == c)
		cout << a << '*' << b << '=' << c;
	else if (a / b == c)
		cout << a << '/' << b << '=' << c;
	else if (a == b + c)
		cout << a << '=' << b << '+' << c;
	else if (a == b - c)
		cout << a << '=' << b << '-' << c;
	else if (a == b * c)
		cout << a << '=' << b << '*' << c;
	else
		cout << a << '=' << b << '/' << c;
	return 0;
}
