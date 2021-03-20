#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> v) {
  int result = 0;
  for (int i = 1; i <= 9; ++i) {
    result += i * pow(10, v[i]);
  }
  return result;
}

int main() {

  int K;
  cin >> K;

  string S, T;
  cin >> S >> T;

  vector<int> s(10);
  vector<int> t(10);

  for (int i = 0; i < 4; ++i) {
    s[(S[i] - '0')]++;
    t[(T[i] - '0')]++;
  }

  long long count = 0;
  long long win = 0;
  int currentS = 0;
  int currentT = 0;

  for (int i = 1; i <= 9; ++i) {

    if (K <= s[i] + t[i]) {
      continue;
    }

    s[i]++;
    
    currentS = sum(s);

    for (int j = 1; j <= 9; ++j) {

      if (K <= s[j] + t[j]) {
        continue;
      }
      
      long long c = (long long)(K - s[j] - t[j]) * (K - s[i] + 1 - t[i]);
      count += c;

      t[j]++;

      currentT = sum(t);
      
      if (currentT < currentS) {
        win += c;
      }

      t[j]--;

    }
    s[i]--;
  }

  double ans = (double) win / count;
  
  printf("%.16f", ans);
  printf("\n");

  return 0;

}