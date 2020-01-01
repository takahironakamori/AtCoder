### ABC085

# B - Kagami Mochi

  [問題はこちら](https://atcoder.jp/contests/abc085/tasks/abc085_b)
  
  
- 発想<br>
  d_1 から d_N までを set に入れて、set の size を出力する方法（C++のコード）と<br>
  d_1 から d_N までを配列に入れて、並び替えて順番に比較していく方法（Javaのコード）<br>
 

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    set<int> d;

    for (int i = 0; i < N; i++) {
      int d_;
      cin >> d_;
      d.insert(d_);
    }

    cout << d.size() << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] d = new int[N];

      for (int i = 0; i < N; i++) {
        d[i] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(d);

      int w = d[N-1];
      int count = 1;

      for (int i = N-2; 0 <= i; i--) {
        if (d[i] < w) {
          w = d[i];
          count++;
        }
      }

      System.out.println(count);

    }

  }
  ```
    