#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a1 = 0, a2 = 0, a3 = 0;

	cin >> a1 >> a2 >> a3;

	if (a1 + a2 + a3 != 180)
		cout << "Error";
	else if (a1 == a2 && a2 == a3)
		cout << "Equilateral";
	else if (a1 == a2 || a2 == a3 || a3 == a1)
		cout << "Isosceles";
	else
		cout << "Scalene";
	return 0;
}
