#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0, B = 0, C = 0, M = 0, fatigue = 0, answer = 0;

	cin >> A >> B >> C >> M;

	for (int i = 0;i < 24;i++) {
		if (fatigue + A <= M) {
			answer += B;
			fatigue += A;
		}
		else
			fatigue = (fatigue - C <= 0 ? 0 : fatigue - C);
	}

	cout << answer;
	return 0;
}
