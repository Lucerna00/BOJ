#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int temp = 0, cnt=0;
	string X;

	cin >> X;

	while (X.length() > 1) {
		temp = 0;
		cnt++;
		for (char i : X)
			temp += (i-'0');
		X = to_string(temp);
	}

	cout << cnt << '\n';
	if (stoi(X) % 3)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}
