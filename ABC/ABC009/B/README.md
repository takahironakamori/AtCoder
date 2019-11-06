### ABC009

# B - 心配性な富豪、ファミリーレストランに行く。

  [問題はこちら](https://atcoder.jp/contests/abc009/tasks/abc009_2)

- 発想<br>
  同じ値は入れないように値を保持する。<br>
  降順に並び替えをして 2 番目の値を出力する。

- 実装のポイント<br>
  set を使うパターン（C++）や、<br>
  map を使うパターン（Java）が考えられる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    set<int, greater<int>> st;

    for (int i = 0; i < N; i++) {
      int A;
      cin >> A;
      st.insert(A);
    }

    int current = 1;

    for(auto x : st) {
      if (current == 2) {
        cout << x << endl;
        break;
      }
      current++;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      
      Map<Integer, Integer> map = new HashMap<Integer, Integer>();

      for( int i = 0; i < N; i++){
        int s = sc.nextInt();
        if (!map.containsKey(s)) {
          map.put(s, 1);
        }
      }

      List<Integer> sortedKeys = new ArrayList(map.keySet());
      
      Collections.sort(sortedKeys, Comparator.reverseOrder());

      System.out.println(sortedKeys.get(1));

    }
  }
  ```
    