### ABC056

# C - Go Home

  [問題はこちら](https://atcoder.jp/contests/abc056/tasks/arc070_a)

- 発想<br>
  最小値を考える場合「x - i」は使わず、「x + i」と「移動しない」の2パターンですべて X に対応できる。<br>
  X を 11　とすると、1秒、2秒、3秒のときは、1 3 6 と進み、4秒のときは止まり、5秒の時に進むと 11 となる。<br>
  X を 11　の場合ですべて進むを選択すると、1 3 6 10 15 と進み、5秒の時に 11 を超える。<br>
  X を 7 とすると、1秒、2秒のときは、1 3 と進み、3秒のときは止まり、4秒のと気に進むと 7 となる。<br>
  X を 7　の場合ですべて進むを選択すると、1 3 6 10 と進み、4秒の時に 7 を超える。<br>
  すべて進むと仮定した場合と結果は同じになる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X;
    cin >> X;

    int v = 0;
    int answer = 0;

    while (v < X) {
      answer++;
      v += answer;
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

      long X = sc.nextLong();

      sc.close();

      int i = 0;
      long count = 0;

      while (count < X) {
        i++;
        count += i;
      }

      System.out.println(i);

    }

  }
  ```
    