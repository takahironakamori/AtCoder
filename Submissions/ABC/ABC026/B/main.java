import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int[] R = new int[N];

    for (int i = 0; i < N; i++) {
      R[i] = sc.nextInt();
    }

    Arrays.sort(R);

    long answer = 0;

    for (int i = 0; i < N; i++) {
      if (i % 2 == 1) {
        answer += R[i] * R[i];
      } else {
        answer -= R[i] * R[i];
      }
    }

    System.out.println(Math.abs(answer) * Math.PI);

  }
}