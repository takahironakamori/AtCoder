# ABC 000

### A - Name

[問題はこちら](https://atcoder.jp/)

- 発想
　ここに発想を簡単に書きます。

- コード（C++）

    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        cout << "Hello, world!" << endl;
    }

- コード（Java）

  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int K = sc.nextInt();
      int S = sc.nextInt();

      sc.close();

      int count = 0;

      for (int i = 0; i <= K; i++) {
        for (int j = 0; j <= K; j++) {
          if ((S - i - j) <= K && 0 <= (S - i - j)) {
            count ++;
          }
        } 
      }

      System.out.println(count);

    }

  }
    