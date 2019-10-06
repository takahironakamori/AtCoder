#include <bits/stdc++.h>
using namespace std;

int main() {

  int H, W;
  cin >> H >> W;
  
  vector<string> s(H);
  for (int i = 0; i < H; i++) {
    cin >> s[i];
  }

  vector<int> p = {-1, 1};

  int count = 0;

  for (int i = 0; i < H; i++) {

    for (int j = 0; j < W; j++) {

      if (s[i][j] == '#') {
      
        string result = "No";
      
        for (int k = 0; k < 2; k++) {
          if (0 <= j + p[k] && j + p[k] < W) {
            if (s[i][j + p[k]] == '#') {
              result = "Yes";
            }
          }
          if (0 <= i + p[k] && i + p[k] < H) {
            if (s[i + p[k]][j] == '#') {
              result = "Yes";
            }
          }
        }

        if (result == "No") {
          count++;
          break;
        }

      } 

    }

    if (count != 0) {
      break;
    }
    
  } 

  if (count == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}