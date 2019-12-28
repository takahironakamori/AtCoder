### ABC019

# A - 高橋くんと年齢

  [問題はこちら](https://atcoder.jp/contests/abc019/tasks/abc019_1)


- 発想<br>
  配列に入れて、並び替えて、2番目の要素を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> abc(3);
    cin >> abc[0] >> abc[1] >> abc[2];
    
    sort(abc.begin(), abc.end());
    cout << abc[1] << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {

    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);

      Integer[] arr = new Integer[3];

      for (int i = 0; i < 3; i++) {
        arr[i] = sc.nextInt();
      }

      Arrays.sort(arr);

      System.out.println(arr[1]);

    }
  }
  ```
    