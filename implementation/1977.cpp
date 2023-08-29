#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M = 0, N = 0, m = 0, sum = 0;

	cin >> M >> N;

	m = (int)ceil(sqrt(M));
	for (int i = m; i <= (int)floor(sqrt(N)); i++)
		sum += (i * i);

	if (!sum)
		cout << -1;
	else
		cout << sum << '\n' << m * m;
}
