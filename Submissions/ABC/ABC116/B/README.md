### ABC116

# B - Collatz Problem

  [問題はこちら](https://atcoder.jp/contests/abc116/tasks/abc116_b)

- 発想
  
  s は最大100、最小の m が1000000以下が保証されているので、シミュレーションでいける。<br>
  大きな配列を用意しておいて、array[計算した結果] が0（初期値）以外の数値になるまでの回数が答え。<br>
  配列で記憶するのもよし。Setをつかってもよし。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int s;
    cin >> s;

    vector<int> array(100100);

    bool valid = true;

    int count = 2;

    array[s]++;

    while (valid) {

      if (s % 2 == 0) {
        s = s / 2;
      } else {
        s = 3 * s + 1;
      }

      if (array[s] != 0) {
        valid = false;
      } else {
        array[s]++;
        count++;
      }

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

      int s = sc.nextInt();

      sc.close();

      boolean valid = true;

      Set<Integer> hashSet = new HashSet<Integer>();

      hashSet.add(s);

      int count = 2;

      while (valid) {

        if (s % 2 == 0) {
          s = s / 2;
        } else {
          s = 3 * s + 1;
        }

        if (hashSet.contains(s)) {
          valid = false;
        } else {
          hashSet.add(s);
          count++;
        }

      }

      System.out.println(count);

    }

  }
  ```
    