#include <bits/stdc++.h>
using namespace std;

int main() {

  int taro, jiro, saburo;
  cin >> taro >> jiro >> saburo;

  if (taro < jiro) {
    if (taro < saburo) {
      cout << 3 << endl;
    } else {
      cout << 2 << endl;
    }
  } else {
    if (taro < saburo) {
      cout << 2 << endl;
    } else {
      cout << 1 << endl;
    }
  }

  if (jiro < saburo) {
    if (jiro < taro) {
      cout << 3 << endl;
    } else {
      cout << 2 << endl;
    }
  } else {
    if (jiro < taro) {
      cout << 2 << endl;
    } else {
      cout << 1 << endl;
    }
  }

  if (saburo < taro) {
    if (saburo < jiro) {
      cout << 3 << endl;
    } else {
      cout << 2 << endl;
    }
  } else {
    if (saburo < jiro) {
      cout << 2 << endl;
    } else {
      cout << 1 << endl;
    }
  }

}