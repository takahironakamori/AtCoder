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
