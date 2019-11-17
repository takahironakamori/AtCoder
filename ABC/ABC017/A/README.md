### ABC017

# A - プロコン

  [問題はこちら](https://atcoder.jp/contests/abc017/tasks/abc017_1)

- 発想<br>
  配点 * 評価 / 10 で各課題の得点を計算する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int s1, s2, s3;
    int e1, e2, e3;
    cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

    int answer = s1 * e1 / 10;
    answer += s2 * e2 / 10;
    answer += s3 * e3 / 10;

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int s1 = sc.nextInt();
      int e1 = sc.nextInt();
      int s2 = sc.nextInt();
      int e2 = sc.nextInt();
      int s3 = sc.nextInt();
      int e3 = sc.nextInt();
      int sum = 0;
      sum = s1 * e1 / 10 + sum;
      sum = s2 * e2 / 10 + sum;
      sum = s3 * e3 / 10 + sum;
      System.out.println(sum);
    }
  }
  ```
    