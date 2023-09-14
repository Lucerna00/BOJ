#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char player1 = 0, player2 = 0;
	int t = 0, n = 0, win1 = 0, win2 = 0;

	cin >> t;
	while (t--) {
		cin >> n;

		win1 = 0;
		win2 = 0;
		while (n--) {
			cin >> player1 >> player2;

			if ((player1 == 'R' && player2 == 'S') || (player1 == 'P' && player2 == 'R') || (player1 == 'S' && player2 == 'P'))
				win1++;
			else if (player1 != player2)
				win2++;
		}

		cout << (win1 > win2 ? "Player 1" : (win1 < win2 ? "Player 2" : "TIE")) << '\n';
	}
	return 0;
}
