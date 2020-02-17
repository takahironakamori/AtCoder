### ABC155

# A - Poor

  [問題はこちら](https://atcoder.jp/contests/abc155/tasks/abc155_a)


- 発想<br>
  以下のどれかを満たせば YES となる。<br>
  ・A と B が同じで C は A か B と異なる
  ・A と C が同じで B は A か C と異なる
  ・B と C が同じで A は B か C と異なる


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    string answer = "No";

    if (A == B && B != C) {
      answer = "Yes";
    } else if (B == C && A != C) {
      answer = "Yes";
    } else if (A == C && B != C) {
      answer = "Yes";
    }

    cout << answer << endl;

    return 0;

  }
  ```
