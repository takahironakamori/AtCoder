#include <bits/stdc++.h>
using namespace std;

int main() {

  int X;
  cin >> X;

  int answer = 1;

  for (int i = 2; i <= X; i++) {

    bool flg = true;
    int count = 2;
    
    while (flg) {
      if (pow(i, count) <= X) {
        answer = max(answer, (int) pow(i,count));
      } else {
        flg = false;
      }
      count++;
    }
  }

  cout << answer << endl;

}