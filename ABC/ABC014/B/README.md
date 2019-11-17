### ABC014

# B - 価格の合計

  [問題はこちら](https://atcoder.jp/contests/abc014/tasks/abc014_2)

- 発想<br>
  X を二進数にする。<br>
  二進数を一桁ずつ調べて、1だったらその桁数目の価格を足し合わせる。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, X;
    cin >> n >> X;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int answer = 0;

    for (int i = 0; i < n; i++) {
      if ((X & (1 << i)) != 0) {
        answer += a[i];
      }
    }

    cout << answer<< endl; 

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int X = sc.nextInt();
      Integer[] arr = new Integer[n];
      int sum = 0;

      for (int i = 0; i < n; i++) {
        arr[i] = sc.nextInt();
      }

      for (int i = 0; i < n; i++) {
        if ((X & (1 << i)) != 0) {
          sum += arr[i];
        }
      }

      System.out.println(sum);

    }
  }
  ```
    