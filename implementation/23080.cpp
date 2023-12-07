#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K = 0;
	string input;

	cin >> K;
	cin >> input;

	for (int i = 0;i < (int)(input.length());i += K)
		cout << input[i];
	return 0;
}