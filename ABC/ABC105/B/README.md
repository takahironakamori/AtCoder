### ABC105

# B - Cakes and Donuts

  [問題はこちら](https://atcoder.jp/contests/abc105/tasks/abc105_b)


- 発想<br>
  ケーキは、0 から N / 4 個、<br>
  ドーナツは、0 から N / 7 個、<br>
  がありえる。数が少ないので全探索すればいい。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;  

    string answer = "No";

    for (int i = 0; i <= N / 4; i++) {
      for (int j = 0; j <= N / 7; j++) {
        if (4 * i + 7 * j == N){
          answer = "Yes";
          break;
        }
      }
      if (answer == "Yes") {
        break;
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

      int N = sc.nextInt();

      sc.close();

      String result = "No";

      if (N % 4 == 0 || N % 7 == 0 || N % 11 == 0){
        result = "Yes";
      }

      if (result.equals("No")){

        for (int i = 1; i <= N / 4; i++) {
          if((N - (4 * i)) % 7 == 0 ) {
            result = "Yes";
            break;
          }
        }

      }

      if (result.equals("No")){

        for (int i = 1; i <= N / 7; i++) {
          if((N - (7 * i)) % 4 == 0 ) {
            result = "Yes";
            break;
          }
        }

      }

      System.out.println(result);

    }

  }
  ```
    