#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len = 0, answer = 0;
	string name;

	cin >> len;
	cin >> name;

	for (char i : name)
		answer += (i - 'A' + 1);

	cout << answer;
	return 0;
}
