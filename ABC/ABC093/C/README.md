### ABC093

# C - Same Integers

  [問題はこちら](https://atcoder.jp/contests/abc093/tasks/arc094_a)

- 発想<br>
  A, B, C の合計を n1 とする。<br>
  A, B, C を昇順に並び替えた数値を n[0], n[1], n[2] とする。<br>
  A, B, C の中で最も大きい数、すなわち n[2] の 3倍したものを n2 とする。<br>
  n1 と n2 の偶奇が同じ場合は、n[0], n[1] を n[2] まで増やす回数を求めればいい。<br>
  n1 と n2 の偶奇が異なる場合は、n[0], n[1], n[2] を n[2] + 1 まで増やす回数を求めればいい。<br>  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> n(3);
    for (int i = 0; i < 3; i++) {
      cin >> n[i];
    }

    sort(n.begin(), n.end());

    int n1 = n[0] + n[1] + n[2];
    int n2 = n[2] * 3;
    int n3 = 0;

    if (n1 % 2 == n2 % 2) {
      n3 = n[2];
    } else {
      n3 = n[2] + 1;
    }

    int count = 0;

    if (n3 != n[2]) {
      n[2]++;
      if (n[0] % 2 == 0) {
        n[0]++;
      } else {
        n[1]++;
      }
      count++;
    }

    while (n[1] != n3){
      if (n3 - n[1] == 1) {
        n[1]++;
        n[0]++;
      } else {
        n[1] += 2;
      }
      count++;
    }

    while (n[0] != n3){
      n[0] += 2;
      count++;
    }

    cout << count << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int[] n = new int[3];
      n[0] = sc.nextInt();
      n[1] = sc.nextInt();
      n[2] = sc.nextInt();

      sc.close();

      Arrays.sort(n);

      int n1 = n[0] + n[1] + n[2];
      int n2 = n[2] * 3;
      int n3 = 0;

      if (n1 % 2 == n2 % 2) {
        n3 = n[2];
      } else {
        n3 = n[2] + 1;
      }

      int count = 0;

      if (n3 != n[2]) {
        n[2]++;
        if (n[0] % 2 == 0) {
          n[0]++;
        } else {
          n[1]++;
        }
        count++;
      }

      while (n[1] != n3){
        if (n3 - n[1] == 1) {
          n[1]++;
          n[0]++;
        } else {
          n[1] += 2;
        }
        count++;
      }

      while (n[0] != n3){
        n[0] += 2;
        count++;
      }

      System.out.println(count);

    }

  }
  ```
    