### ABC082

# C - Good Sequence

  [問題はこちら](https://atcoder.jp/contests/abc082/tasks/arc087_a)

- 発想
  
  良い数列は、1が1個、2が2個、3が3個、4が4個...なので、a_1、a_2、... a_n どの数値が何個あるのかを数えて、取り除く数を数える。
  
- 実装のポイント

  連想配列を使う<br>
  key < value のときは、value - key 個、取り除く<br>
  key >= value のときは、value 個、取り除く
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    map<int, int> mp;
    for (int i = 0; i < N; i++) {
      int a_;
      cin >> a_;
      mp[a_]++;
    }

    int count = 0;

    for (auto item:mp) {
      if (item.first != item.second) {
        if (item.first < item.second) {
          count += item.second - item.first;
        } else {
          count += item.second;
        }
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

      Map<Integer, Integer> map = new HashMap<Integer, Integer>();

      for (int i = 0; i < N; i++) {
        int a = sc.nextInt();
        if (map.containsKey(a)) {
          map.put(a,map.get(a) + 1);
        } else {
          map.put(a,1);
        }
      }

      sc.close();

      int count = 0;

      for (int key : map.keySet()) {
        if (key <= map.get(key)) {
          count += map.get(key) - key;
        } else {
          count += map.get(key);
        }
      }

      System.out.println(count);

    }

  }
  ```
    