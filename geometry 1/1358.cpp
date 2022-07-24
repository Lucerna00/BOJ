#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int W = 0, H = 0, X = 0, Y = 0, P = 0, x = 0, y = 0, count = 0;
	double len = 0;

	cin >> W >> H >> X >> Y >> P;
	while (P--) {
		cin >> x >> y;
		if (y >= Y && y <= Y + H) {
			len = sqrt(pow(H / 2, 2) - pow(y - (Y + H / 2), 2));
			if (x >= X - len && x <= X + W + len)
				count++;
		}
	}

	cout << count;
	return 0;
}