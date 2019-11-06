#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  string s = S.substr(0,12);

  if (s == "WBWBWWBWBWBW") {
    cout << "Do" << endl;
  } else if (s == "WBWWBWBWBWWB")  {
    cout << "Re" << endl;
  } else if (s == "WWBWBWBWWBWB")  {
    cout << "Mi" << endl;
  } else if (s == "WBWBWBWWBWBW")  {
    cout << "Fa" << endl;
  } else if (s == "WBWBWWBWBWWB")  {
    cout << "So" << endl;
  } else if (s == "WBWWBWBWWBWB")  {
    cout << "La" << endl;
  } else if (s == "WWBWBWWBWBWB")  {
    cout << "Si" << endl;
  }

}