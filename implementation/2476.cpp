#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, f = 0, s = 0, t = 0, temp = 0, answer = 0;

	cin >> N;
	while (N--) {
		cin >> f >> s >> t;

		temp = 0;
		if (f == s && s == t)
			temp = 10000 + f * 1000;
		else if (f == s || t == f)
			temp = 1000 + f * 100;
		else if (s == t)
			temp = 1000 + s * 100;
		else
			temp = max({ f,s,t }) * 100;
		answer = max(answer, temp);		
	}

	cout << answer;
	return 0;
}
