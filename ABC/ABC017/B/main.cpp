#include <bits/stdc++.h>
using namespace std;

int main() {

  string X;
  cin >> X;

  string answer = "YES";
 
  for (int i = 0; i < X.size(); i++) {
    if (X[i] != 'c' && X[i] != 'h' && X[i] != 'o' && X[i] != 'k' && X[i] != 'u') {
      answer = "NO";
      break;
    } else if (X[i] == 'c') {
      if (i == X.size() - 1) {
        answer = "NO";
        break;
      } else if (X[i + 1] != 'h'){
        answer = "NO";
        break;
      }
    } else if (X[i] == 'h') {
      if (i == 0) {
        answer = "NO";
        break;
      } else if (X[i - 1] != 'c'){
        answer = "NO";
        break;
      }
    }
  }

  cout << answer << endl;

}