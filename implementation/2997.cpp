#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num[3] = { 0, }, dif1 = 0, dif2 = 0;

	for (int i = 0;i < 3;i++)
		cin >> num[i];
	sort(num, num + 3);
	dif1 = num[1] - num[0];
	dif2 = num[2] - num[1];
	if (dif1 == dif2)
		cout << num[2] + dif1;
	else if (dif1 > dif2)
		cout << num[0] + dif2;
	else
		cout << num[1] + dif1;
	return 0;
}
