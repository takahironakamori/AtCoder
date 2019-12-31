#include <bits/stdc++.h>
using namespace std;

int main() {

  string A, B;
  cin >> A >> B;

  if (A.size() < B.size()) {
    string a = "";
    for (int i = 0; i < B.size() - A.size(); i++) {
      a += "0";
    }
    a += A;
    A = a;
  } else if (A.size() != B.size()) {
    string b = "";
    for (int i = 0; i < A.size() - B.size(); i++) {
      b += "0";
    }
    b += B;
    B = b;
  }

  if (B < A) {
    cout << "GREATER" << endl;
  } else if (A == B) {
    cout << "EQUAL" << endl;
  } else {
    cout << "LESS" << endl;
  }

}