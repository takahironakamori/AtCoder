### ABC066

# A - ringring

  [問題はこちら](https://atcoder.jp/contests/abc066/tasks/abc066_a)


- 発想<br>
  配列に入れて並び替え、小さい方から 2 つの合計を出力する。(C++のコード)<br>
  または、比較して 小さいもの 2 つの合計を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> abc(3);

    cin >> abc[0] >> abc[1] >> abc[2];

    sort(abc.begin(), abc.end());

    cout << abc[0] + abc[1] << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();

      if ((b <= a) && (c <= a)) {
        System.out.println(b + c);
      } else if ((a <= b) && (c <= b)) {
        System.out.println(a + c);
      } else {
        System.out.println(a + b);
      }

    }
  }
  ```
    