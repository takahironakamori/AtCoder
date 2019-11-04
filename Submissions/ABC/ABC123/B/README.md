### ABC123

# B - Five Dishes

  [問題はこちら](https://atcoder.jp/contests/abc123/tasks/abc123_b)

- 発想<br>
  次の料理を頼むことができる待ち時間が最も長い料理は最後に注文した方がいい。<br>
  待ち時間は、10から、調理時間を10で割った余りを引いた数です。<br>
  各料理について、待ち時間と調理時間を保持し、待ち時間で並び替えを行う。<br>
  最後に頼む料理以外は、すべて調理時間+待ち時間、時間が必要である。

- 実装のポイント<br>
　２次元配列の並び替えに注意する。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<pair<int, int>> time(5);

    for (int i = 0; i < 5; i++) {
      int a;
      cin >> a;
      int b = 10 - a % 10;
      if (b == 10) {
        b = 0;
      }
      time[i] = make_pair(b, a);
    }

    sort(time.begin(), time.end());

    int answer = 0;

    for (int i = 0; i < 5; i++) {
      if (i != 4) {
        answer += time[i].second;
        answer += time[i].first;
      } else {
        answer += time[i].second;
      } 
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

      Integer[][] time = new Integer[5][2];

      for (int i = 0; i < 5; i++) {
        int a = sc.nextInt();
        int b = 10 - a % 10;
        if (b == 10) {
          b = 0;
        }
        time[i][0] = b;
        time[i][1] = a;
      }

      sc.close();

      Arrays.sort(time, (a1,b1) -> Integer.compare(a1[0],b1[0]));

      int answer = 0;

      for (int i = 0; i < 5; i++) {
        if (i != 4) {
          answer += time[i][1];
          answer += time[i][0];
        } else {
          answer += time[i][1];
        } 
      }

      System.out.println(answer);

    }

  }
  ```
    