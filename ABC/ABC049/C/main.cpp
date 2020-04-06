#include <bits/stdc++.h>
using namespace std;

string replaceAll(string &replacedStr, string from, string to) {
    int pos = replacedStr.find(from);
    int toLen = to.length();

    if (from.empty()) {
        return replacedStr;
    }

    while ((pos = replacedStr.find(from, pos)) != string::npos) {
        replacedStr.replace(pos, from.length(), to);
        pos += toLen;
    }
    return replacedStr;
}


int main() {

  string s;
  cin >> s;

  reverse(s.begin(), s.end());

  replaceAll(s, "resare", "");
  replaceAll(s, "esare", "");
  replaceAll(s, "remaerd", "");
  replaceAll(s, "maerd", "");

  if (s == "") {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;

}
