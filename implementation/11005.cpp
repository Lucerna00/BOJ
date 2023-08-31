#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, B = 0;
	string answer;

	cin >> N >> B;

	while (N) {
		if (N % B < 10)
			answer.push_back(N % B + '0');
		else
			answer.push_back(N % B - 10 + 'A');
		N /= B;
	}
	reverse(answer.begin(), answer.end());

	cout << answer;
	return 0;
}
