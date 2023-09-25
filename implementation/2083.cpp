#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int	age = 0, weight = 0;
	string name;

	while (true) {
		cin >> name >> age >> weight;

		if (name == "#")
			break;

		cout << name << " ";
		if (age > 17 || weight >= 80)
			cout << "Senior\n";
		else
			cout << "Junior\n";
	}
	return 0;
}
