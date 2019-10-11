import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int T = sc.nextInt();
    int[] A = new int[100000];

    for (int i = 0; i < N; i++) {
      A[i] = sc.nextInt();
    }

    int answer = T;

    for (int i = 0; i < (N - 1); i++) {
      if (A[i+1] - A[i] < T) {
        answer += A[i+1] - A[i];
      } else if ((A[i+1] - A[i]) >= T) {
        answer += T;
      }
    }

    System.out.println(answer);

  }
}