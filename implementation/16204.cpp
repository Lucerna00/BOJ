#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, K = 0;

	cin >> N >> M >> K;

	cout << N - abs(M - K);
	return 0;
}
