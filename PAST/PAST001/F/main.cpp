#include <bits/stdc++.h>
using namespace std;

// 比較関数
bool cmp (const string &A, const string &B) {
  string a = "";
  for (int i = 0; i < A.size(); i++) {
    int v = (int) A[i];
    if (v <= 90) {
      a += char(v);
    } else {
      a += char(v - 32);
    }
  }
  string b = "";
  for (int i = 0; i < B.size(); i++) {
    int v = (int) B[i];
    if (v <= 90) {
      b += char(v);
    } else {
      b += char(v - 32);
    }
  }
  
  if (a != b) {
    return a < b;
  }
  return false;
}

int main() {

  string S;
  cin >> S;

  vector<string> s;

  bool flg = false;
  int start = 0;
  int len = 0;
  string word = "";

  for (int i = 0; i < S.size(); i++) {
    int ascii = (int) S[i];
    if (65 <= ascii && ascii <= 90) {
      if (flg == false) {
        start = i;
        flg = true;
      } else {
        len = i - start + 1;
        flg = false;
        word = S.substr(start, len);
        s.push_back(word);
      }
    }
  }

  sort(s.begin(), s.end(), cmp);

  for (int i = 0; i < s.size(); i++) {
    cout << s[i];
  }

  cout << endl;

  return 0;

}