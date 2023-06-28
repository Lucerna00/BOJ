#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int B, answer = 0;
	string N;

	cin >> N >> B;

	for (int i = N.length() - 1;i >= 0;i--) {
		if (N[i] >= 'A' && N[i] <= 'Z')
			answer += (N[i] - 'A' + 10) * ((int)pow(B, N.length() - 1 - i));
		else
			answer += (N[i] - '0') * ((int)pow(B, N.length() - 1 - i));
	}

	cout << answer;
	return 0;
}
