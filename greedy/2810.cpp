#include<iostream>
#include<string>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int N = 0, cnt = 0;
   string input;

   cin >> N >> input;

   cnt = N + 1;
   for (int i = 0;i < N;i++) {
      if (input[i] == 'L') {
         cnt--;
         i++;
      }
   }

   if (N < cnt)
      cout << N;
   else
      cout << cnt;
   return 0;
}
