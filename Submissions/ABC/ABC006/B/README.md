### ABC006

# A - 世界のFizzBuzz

  [問題はこちら](https://atcoder.jp/contests/abc006/tasks/abc006_1)

- 発想<br>
  N が 3 で割り切れたら YES を、割り切れない場合は NO を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    long long r = 0;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++){
      if(i < 2){
        arr[i] = 0;
      } else if(i == 2){
        arr[i] = 1;
      } else {
        arr[i] = (arr[i-3] + arr[i-2] + arr[i-1] ) % 10007;
      }
      r = arr[i];
    }

    cout << r << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      long r = 0;
      long[] arr = new long[n];

      for (int i = 0; i < n; i++){
        if(i < 2){
          arr[i] = 0;
        } else if(i == 2){
          arr[i] = 1;
        } else {
          arr[i] = (arr[i-3] + arr[i-2] + arr[i-1] ) % 10007;
        }
        r = arr[i];
      }

      System.out.println(r);

    }
  }
  ```
    