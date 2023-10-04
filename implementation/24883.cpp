#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char input = 0;

	cin >> input;

	if (input == 'N' || input == 'n')
		cout << "Naver D2";
	else
		cout << "Naver Whale";
	return 0;
}
