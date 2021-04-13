#include <bits/stdc++.h>
using namespace std;


int main() {

  string S1, S2, S3;
  cin >> S1 >> S2 >> S3;

  map<char,long long> s;
  long long count = 1;

  vector<long long> s1(S1.size());
  for (int i = 0; i < int(S1.size()); ++i) {
    if (i == 0) {
      s[S1[i]] = count;
      count++;
    } else if (s[S1[i]] == 0){
      s[S1[i]] = count;
      count++;
    }
    s1[i] = s[S1[i]] - 1;
  }

  vector<long long> s2(S2.size());
  for (int i = 0; i < int(S2.size()); ++i) {
    if (s[S2[i]] == 0){
      s[S2[i]] = count;
      count++;
    }
    s2[i] = s[S2[i]] - 1;
  }

  vector<long long> s3(S3.size());
  for (int i = 0; i < int(S3.size()); ++i) {
    if (s[S3[i]] == 0){
      s[S3[i]] = count;
      count++;
    }
    s3[i] = s[S3[i]] - 1;
  }

  if (10 < count - 1) {
    cout << "UNSOLVABLE" << endl;
    return 0;
  }

  vector<long long> v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }
  
  do {
      bool flg = true;

      long long v1 = 0;
      long long v2 = 0;
      long long v3 = 0;

      for (int i = 0; i < int(S1.size()); ++i) {
        if (i == 0) {
          v1 = v[s1[i]];
        } else {
          v1 = v1 * 10 + v[s1[i]];
        }
        if (v1 == 0){
          flg = false;
          break;
        }
      }

      if (flg) {
        for (int i = 0; i < int(S2.size()); ++i) {
          if (i == 0) {
            v2 = v[s2[i]];
          } else {
            v2 = v2 * 10 + v[s2[i]];
          }
          if (v2 == 0){
            flg = false;
            break;
          }
        }
      }

      if (flg) {
        for (int i = 0; i < int(S3.size()); ++i) {
          if (i == 0) {
            v3 = v[s3[i]];
          } else {
            v3 = v3 * 10 + v[s3[i]];
          }
          if (v3 == 0){
            flg = false;
            break;
          }
        }
      }

      if (flg) {
        if (0 == v1 || 0 == v2 || 0 == v3) {
          flg = false;
        }
      }

      if (flg) {
        if (v1 == v3 - v2) {
          cout << v1 << endl;
          cout << v2 << endl;
          cout << v3 << endl;
          return 0;
        }
      }
  } while (next_permutation(v.begin(), v.end()));  

  cout << "UNSOLVABLE" << endl;

  return 0;

}