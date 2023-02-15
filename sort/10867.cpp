#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, input = 0, checked[2001] = { 0, };

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> input;
		checked[input + 1000] = 1;
	}

	for (int i = 0;i <= 2000;i++) {
		if (checked[i])
			cout << i - 1000 << " ";
	}
	return 0;
}
