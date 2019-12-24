#include <bits/stdc++.h>
using namespace std;

int main() {
 
  string a, b;
  cin >> a >> b;

  string answer = "";

  if (a == "H") {
    if (b == "H") {
      answer = "H";
    } else {
      answer = "D";
    }
  } else {
    if (b == "H") {
      answer = "D";
    } else {
      answer = "H";
    }
  }

  cout << answer << endl;

}