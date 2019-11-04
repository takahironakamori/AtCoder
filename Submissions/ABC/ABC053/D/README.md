### ABC053

# D - Card Eater

  [問題はこちら](https://atcoder.jp/contests/abc053/tasks/arc068_b)

- 発想
  
  少ない回数で最も多く得点を得る方法は、6 → 5 → 6 → 5 と繰り返す方法である。 <br>
  あまりも考慮する必要があるので、以下の手順で計算する。
  
  1.x ÷ 11 の商を2倍した数値を得る<br>
  2.x ÷ 11 のあまりを得る<br>
  3.あまりが0なら商が答え。1〜6の場合が商に1加え数が答え。7以上の場合は商に2加えた数が答え。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    set<int> treeSet;
    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;
      treeSet.insert(a);
    }

    int s = treeSet.size();

    if (s % 2 == 0) {
      cout << s - 1 << endl;
    } else {
      cout << s << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main(String[] args) {

      Scanner sc = new Scanner(System.in);    

      int N = sc.nextInt();

      Set<Integer> treeSet = new TreeSet<Integer>();

      for (int i = 0; i < N; i++) {
        treeSet.add(sc.nextInt());
      }

      sc.close();

      int s = treeSet.size();

      if (s % 2 == 0) {
        System.out.println(s - 1);
      } else {
        System.out.println(s);
      }

    }

  }
  ```
    