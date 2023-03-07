#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int unit[6] = { 500,100,50,10,5,1 }, pay = 0, answer = 0;

	cin >> pay;

	pay = 1000 - pay;
	for (int i = 0;i < 6 && pay;i++) {
		answer += pay / unit[i];
		pay -= pay / unit[i] * unit[i];
	}

	cout << answer;
	return 0;
}
