#include <bits/stdc++.h>
using namespace std;

vector<string> stringSplit(const string &str, char sep) {
  vector<string> v;
  stringstream ss{str};
  string buffer;
  while (getline(ss, buffer, sep)) {
    v.push_back(buffer);
  }
  return v;
}

int main() {

  string s;
  getline(cin, s);

  vector<string> v = stringSplit(s, ' ');

  for (int i = 0; i < v.size(); i++) {
    if (v[i] == "Left") {
      cout << "<";
    }
    if (v[i] == "Right") {
      cout << ">";
    }
    if (v[i] == "AtCoder") {
      cout << "A";
    }
    if (i != v.size() - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;

}
