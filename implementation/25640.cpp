#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;
	string MBTI, temp;

	cin >> MBTI;
	cin >> N;
	while (N--) {
		cin >> temp;

		if (temp == MBTI)
			answer++;
	}

	cout << answer;
	return 0;
}
