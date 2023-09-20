#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0, B = 0, C = 0, D = 0;

	cin >> A >> B;
	cin >> C >> D;

	cout << min(A + D, B + C);
	return 0;
}
