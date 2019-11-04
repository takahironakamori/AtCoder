### ABC073

# C - Write and Erase

  [問題はこちら](https://atcoder.jp/contests/abc073/tasks/abc073_c)

- 発想
  
  各数字について、お姉ちゃんが言った回数を数えておく。<br>
  その回数が偶数の場合は、その数字は消されている状態である。<br>
  その回数が奇数の場合は、その数字が書かれている状態である。<br>
  したがって、奇数の数字の数を数える。
  
  Setを利用して、消す場合をremove、書く場合はaddを使うこともできる。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    map<int, int> map;

    for (int i = 0; i < N; i++) {
      int A;
      cin >> A;
      map[A]++;
    }

    int count = 0;

    for (auto i: map) {
      if (i.second % 2 != 0) {
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

      int N = sc.nextInt();
      int[] A = new int[N];

      for (int i = 0; i < N; i++) {
        A[i] = sc.nextInt();
      }

      sc.close();

      Set<Integer> hashSet = new HashSet<Integer>();

      for (int i = 0; i < N; i++) {
        if (hashSet.contains(A[i])){
          hashSet.remove(A[i]);
        } else {
          hashSet.add(A[i]);
        }
      }

      System.out.println(hashSet.size());

    }

  }
  ```
    