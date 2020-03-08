### ABC158

# B - Count Balls

  [問題はこちら](https://atcoder.jp/contests/abc158/tasks/abc158_b)


## 発想

  N個のうち、(A + B)が何回あるかを割り算で計算する。<br>
  その余りとAとで小さい方と商を加えたものが回答となる。


## コード（C++）

```cpp
using namespace std;

int main() {

  long long N, A, B;
  cin >> N >> A >> B;

  long long answer = N / (A + B) * A;

  long long a = N % (A + B);

  answer += min(a, A);

  cout << answer << endl;

  return 0;

}
```
