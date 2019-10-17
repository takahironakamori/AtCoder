### ABC123

# B - Five Dishes

  [問題はこちら](https://atcoder.jp/contests/abc123/tasks/abc123_b)

- 発想<br>
  4文字を前半2文字と後半2文字の数値に分けて、それぞれ1以上12以下か否かを判定する。
  
  1.前半と後半の両方で1以上12以下を満たす場合はAMBIGUOUSを出力する。<br>
  2.前半だけ1以上12以下を満たす場合はMMYYを出力する。<br>
  3.後半だけ1以上12以下を満たす場合はYYMMを出力する。<br>
  
  1.から3.をすべて満たさない場合は、NAを出力する。

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
    