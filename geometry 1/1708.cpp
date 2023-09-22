#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

bool cmp1(const pair<pair<int, int>, double>&, const pair<pair<int, int>, double>&);
bool cmp2(const pair<pair<int, int>, double>&, const pair<pair<int, int>, double>&);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	pair<int, int> initPoint;
	vector<pair<int, int>> answer;

	cin >> N;

	vector<pair<pair<int, int>, double>> points(N);

	for (int i = 0;i < N;i++)
		cin >> points[i].first.first >> points[i].first.second;

	sort(points.begin(), points.end(), cmp1);
	initPoint = points[0].first;

	for (int i = 1;i < N;i++)
		points[i].second = atan2(initPoint.second - points[i].first.second, initPoint.first - points[i].first.first);
	sort(points.begin() + 1, points.end(), cmp2);

	answer.push_back(points[0].first);
	answer.push_back(points[1].first);
	for (int i = 2;i < N;i++) {
		pair<int, int> c = points[i].first;

		while (answer.size() > 1) {
			pair<int, int> b = answer.back(); answer.pop_back();
			pair<int, int> a = answer.back();

			if ((b.first - a.first) * (c.second - a.second) - (c.first - a.first) * (b.second - a.second) > 0) {
				answer.push_back(b);
				break;
			}
		}
		answer.push_back(c);
	}

	cout << answer.size();
	return 0;
}

bool cmp1(const pair<pair<int, int>, double>& a, const pair<pair<int, int>, double>& b) {
	return ((a.first.second < b.first.second) || (a.first.second == b.first.second && a.first.first > b.first.first));
}

bool cmp2(const pair<pair<int, int>, double>& a, const pair<pair<int, int>, double>& b) {
	if (a.second == b.second)
		return cmp1(a, b);
	else
		return a.second < b.second;
}
