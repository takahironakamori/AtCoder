### ABC072

# D - Derangement

  [問題はこちら](https://atcoder.jp/contests/abc072/tasks/arc082_b)

- 発想<br>
  i と p_i が同じなら x 違うなら o とする。<br>
  すべて o であればスワップの必要がない。<br>
  xo とならんでいるとスワップすることで、oo となる。<br>
  xx とならんでいるとスワップすることで、oo となる。<br>
  p_1 から順番に調べて行って、x があれば 1カウント加える。<br>
  x があったら次は x であってもカウントしない。<br>

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> v(N);
    int answer = 0;
    bool validate = false;
    for (int i = 0; i < N; i++) {
      int p;
      cin >> p;
      if ((p - 1) == i) {
        v[i] = 1;
        if (validate) {
          validate = false;
        } else {
          answer++;
          validate = true;
        }
      } else {

      }
    }

    cout << answer << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();

      int[] v = new int[N];

      int answer = 0;
      boolean validate = false;
      for (int i = 0; i < N; i++) {
        int p = sc.nextInt();
        if ((p - 1) == i) {
          v[i] = 1;
          if (validate) {
            validate = false;
          } else {
            answer++;
            validate = true;
          }
        } else {
          validate = false;
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    