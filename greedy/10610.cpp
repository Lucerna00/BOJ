#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;
	int temp = 0;

	cin >> N;

	sort(N.begin(), N.end(), greater<char>());

	if (N.back() != '0')
		cout << -1;
	else {
		for (auto i : N)
			temp += i - '0';
		if (temp % 3)
			cout << -1;
		else
			cout << N;
	}
	return 0;
}
