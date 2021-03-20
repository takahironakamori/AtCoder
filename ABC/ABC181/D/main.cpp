#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  if (S.size() == 1) {
    if (S == "8") {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
    return 0;
  }

  if (S.size() == 2) {
    int a = (S[0] - '0') + (S[1] - '0') * 10;
    int b = (S[1] - '0') + (S[0] - '0') * 10;
    if (a % 8 == 0 || b % 8 == 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
    return 0;
  }

  /*
  if (S.size() == 3) {
    vector<int> c(6);
    c[0] = (S[0] - '0') + (S[1] - '0') * 10 + (S[2] - '0') * 100;
    c[1] = (S[0] - '0') + (S[2] - '0') * 10 + (S[1] - '0') * 100;
    c[2] = (S[1] - '0') + (S[0] - '0') * 10 + (S[2] - '0') * 100;
    c[3] = (S[1] - '0') + (S[2] - '0') * 10 + (S[0] - '0') * 100;
    c[4] = (S[2] - '0') + (S[0] - '0') * 10 + (S[1] - '0') * 100;
    c[5] = (S[2] - '0') + (S[1] - '0') * 10 + (S[0] - '0') * 100;
    string ans = "No";
    for (int i = 0; i < 6; ++i) {
      if (c[i] % 8 == 0) {
        ans = "Yes";
        break;
      }
    }
    cout << ans << endl;
    return 0;
  }
  */

  vector<int> count(10);
  for (int i = 0; i < int(S.size()); ++i) {
    count[(S[i] - '0')]++;
  }

  string ans = "No";

  for (int i = 112; i < 1000; i += 8) {
    string v = to_string(i);
    vector<int> countV(10);
    for (int j = 0; j < int(v.size()); ++j) {
      countV[(v[j] - '0')]++;
    }

    if (0 < countV[0]) {
      continue;
    }
    
    bool flg = true;

    for (int j = 1; j < 10; ++j) {
      if (count[j] < countV[j]){
        flg = false;
        break;
      }
    }

    if (flg == true) {
      ans =  "Yes";
      break;
    }
  }

  cout << ans << endl;

  return 0;

}