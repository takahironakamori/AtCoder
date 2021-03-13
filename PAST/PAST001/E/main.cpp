#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Q;
  cin >> N >> Q;

  // data[a][b] ユーザー a が　ユーザー b をフォローしている場合は Y, フォローしていない場合は N 
  vector<vector<string>> data(N+1, vector<string>(N+1));

  // すべての状況を N にする
  for (int i = 1; i < N+1; i++) {
    for (int j = 1; j < N+1; j++) {
      data[i][j] = "N";
    }
  }

  for (int i = 0; i < Q; i++) {
    string q;
    cin >> q;
    if (q == "1") {
      int a, b;
      cin >> a >> b;
      // ユーザー a が　ユーザー b をフォローする
      data[a][b] = "Y";
    } else if (q == "2") {
      int a;
      cin >> a;
      for (int j = 1; j < N+1; j++) {
        // ユーザー j が　ユーザー a をフォローしている場合は、フォローする
        if (data[j][a] == "Y") {
          data[a][j] = "Y";
        }
      }
    } else {
      int a;
      cin >> a;
      
      // フォローするユーザーの連想配列、v[b] = 1 のとき、
      // ユーザー a はユーザー b をフォローする
      vector<int> v(N+1);

      for (int j = 1; j < N+1; j++) {
        // ユーザー a がフォローしているユーザーにかぎる
        if (data[a][j] == "Y") {
          for (int k = 1; k < N+1; k++) {
            // フォローしているユーザーがフォローしているユーザーを連想配列にメモする
            if (data[j][k] == "Y" && a != k) {
              v[k] = 1;
            }
          }
        }
      }

      // 連想配列からフォローすべきユーザーをフォローする
      for (int j = 1; j < N+1; j++) {
        if (v[j] == 1) {
          data[a][j] = "Y";
        }
      }
    }
  }

  for (int i = 1; i < N+1; i++) {
    for (int j = 1; j < N+1; j++) {
      cout << data[i][j];
    }
    cout << endl;
  }

  return 0;

}