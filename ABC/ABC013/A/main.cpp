#include <bits/stdc++.h>
using namespace std;

int main() {

  char X;
  cin >> X;

  string s = "ABCDE";

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == X) {
      cout << i + 1 << endl;
    }
  }

}