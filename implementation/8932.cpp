#include<iostream>
#include<cmath>

using namespace std;

float A[7] = { 9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193 }, B[7] = { 26.7, 75, 1.5, 42.5, 210, 3.8, 254 }, C[7] = { 1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, P = 0;

	cin >> T;
	while (T--) {
		int answer = 0;

		for (int i = 0;i < 7;i++) {
			cin >> P;

			if (i == 0 || i == 3 || i == 6)
				answer += (int)(A[i] * pow((B[i] - P), C[i]));
			else
				answer += (int)(A[i] * pow((P - B[i]), C[i]));
		}

		cout << answer << '\n';
	}
	return 0;
}
