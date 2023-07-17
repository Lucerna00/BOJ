#include<iostream>
#include<string>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int len = 0, leftSum = 0, rightSum = 0;
   string N;

   cin >> N;

   len = (int)N.length() / 2;
   for (int i = 0;i < len;i++) {
      leftSum += (N[i] - '0');
      rightSum += (N[i + len] - '0');
   }

   if (leftSum == rightSum)
      cout << "LUCKY";
   else
      cout << "READY";
   return 0;
}
