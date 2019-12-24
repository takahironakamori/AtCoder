### ABC062

# A - Grouping

  [問題はこちら](https://atcoder.jp/contests/abc062/tasks/abc062_a)

- 発想<br>
  x と y がどのグループに属するかを確認して同じならYesを出力する<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x, y;
    cin >> x >> y;

    int X;
    int Y;

    if (x == 2) {
      X = 3; 
    } else if (x == 4 || x == 6 || x == 9 || x == 11) {
      X = 2; 
    } else {
      X = 1; 
    }

    if (y == 2) {
      Y = 3; 
    } else if (y == 4 || y == 6 || y == 9 || y == 11) {
      Y = 2; 
    } else {
      Y = 1; 
    }

    if (X == Y) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int x = sc.nextInt();
      int y = sc.nextInt();
      int[] aGroup = {1,3,5,7,8,10,12};
      int[] bGroup = {4,6,9,11};
      int[] cGroup = {2};
      String xGroup = "x";
      String yGroup = "y";

      for (int i = 0; i < 7; i++) {
        if (aGroup[i] == x) {
          xGroup = "a";
        }
        if (aGroup[i] == y) {
          yGroup = "a";
        }
      }

      for (int i = 0; i < 4; i++) {
        if (bGroup[i] == x) {
          xGroup = "b";
        }
        if (bGroup[i] == y) {
          yGroup = "b";
        }
      }

      if ((x == 2) && (y == 2)) {
        xGroup = "c";
        yGroup = "c";
      }

      if (xGroup.equals(yGroup)) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    