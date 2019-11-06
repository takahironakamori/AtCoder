### ABC008

# B - 投票

  [問題はこちら](https://atcoder.jp/contests/abc008/tasks/abc008_2)

- 発想<br>
  名前と得票数を保持する。<br>
  S_1 から S_N まで調べ終わったら、最も得票数が多い人の名前を表示する。

- 実装のポイント<br>
  map を使うと容易に実装できる。<br>
  特に並び替えは必要ないので、Java だと Hashmap で十分。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    map<string, int> mp;
    
    for (int i = 0; i < N; i++) {
      string S;
      cin >> S;
      if (mp.count(S) == 0) {
        mp[S] = 1;
      } else {
        mp[S]++;
      }
    }

    string name = "";
    int value = 0;

    for (auto item:mp) {
      if (value < item.second) {
        name = item.first;
        value = item.second;
      }
    }

    cout << name << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();

      HashMap<String, Integer> hashMap = new HashMap<>();

      for (int i = 0; i < N; i++){
        String s = sc.next();
        if (hashMap.containsKey(s)){
          int v = hashMap.get(s);
          hashMap.put(s, v + 1);
        } else {
          hashMap.put(s, 1);
        }
      }

      sc.close();

      String result = "";
      int max = 0;

      for (Map.Entry<String, Integer> map : hashMap.entrySet()) {
        if (max < map.getValue()) {
          result = map.getKey();
          max = map.getValue();
        }
      }

      System.out.println(result);

    }

  }
  ```
    