### ABC004

# B - 回転

  [問題はこちら](https://atcoder.jp/contests/abc004/tasks/abc004_2)

- 発想<br>
  入力で取得した順番と逆の順番で出力すればいい。<br>

- 実装のポイント<br>
  2次元配列や2重ループを使ってもいいが、少し複雑になる。<br>
  コードは美しくないかもしれないが間違いが数ない方法で書くという考え方もある。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<string> S1(4);
    vector<string> S2(4);
    vector<string> S3(4);
    vector<string> S4(4);

    for (int i = 0; i < 4; i++) {
      cin >> S1[i];
    }
    for (int i = 0; i < 4; i++) {
      cin >> S2[i];
    }
    for (int i = 0; i < 4; i++) {
      cin >> S3[i];
    }
    for (int i = 0; i < 4; i++) {
      cin >> S4[i];
    }

    cout << S4[3] << " " << S4[2] << " " << S4[1] << " " << S4[0] << endl;
    cout << S3[3] << " " << S3[2] << " " << S3[1] << " " << S3[0] << endl;
    cout << S2[3] << " " << S2[2] << " " << S2[1] << " " << S2[0] << endl;
    cout << S1[3] << " " << S1[2] << " " << S1[1] << " " << S1[0] << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);

      String[] s1 = new String[4]; 
      String[] s2 = new String[4]; 
      String[] s3 = new String[4]; 
      String[] s4 = new String[4]; 

      for (int i = 0; i < 4; i++) {
        s1[i] = sc.next();
      }

      for (int i = 0; i < 4; i++) {
        s2[i] = sc.next();
      }

      for (int i = 0; i < 4; i++) {
        s3[i] = sc.next();
      }

      for (int i = 0; i < 4; i++) {
        s4[i] = sc.next();
      }

      sc.close();

      System.out.println(s4[3] + " " +s4[2] + " " + s4[1] + " " + s4[0]);
      System.out.println(s3[3] + " " +s3[2] + " " + s3[1] + " " + s3[0]);
      System.out.println(s2[3] + " " +s2[2] + " " + s2[1] + " " + s2[0]);
      System.out.println(s1[3] + " " +s1[2] + " " + s1[1] + " " + s1[0]);

    }
  }
  ```
    