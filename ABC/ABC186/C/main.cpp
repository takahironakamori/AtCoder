#include <bits/stdc++.h>
using namespace std;

bool check(string a) {
  bool result = true;
  for (int i = 0; i < int(a.size()); ++i) {
    if (a[i] == '7') {
      result = false;
      break;
    }
  }
  return result;
}

string change(int v, int n){
  string ans = "";
  for (int i = 0; 0 < v; i++)
  {
    ans += to_string(v % n);
    v = v / n;
  }
  reverse(ans.begin(),ans.end());
  return ans;
}

int main() {

  int N;
  cin >> N;

  int ans = 0;

  for (int i = 1; i <= N; ++i) {
    bool c1 = check(to_string(i));
    if (c1) {
      string s2 = change(i, 8);
      bool c2 = check(s2);
      if  (c2) {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;

}