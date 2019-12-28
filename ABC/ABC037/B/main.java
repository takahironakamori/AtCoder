import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    int Q = sc.nextInt();
    int[] L = new int[Q];
    int[] R = new int[Q];
    int[] T = new int[Q];

    for (int i = 0; i < Q; i++) {
      L[i] = sc.nextInt() - 1;
      R[i] = sc.nextInt() - 1;
      T[i] = sc.nextInt();
    }

    sc.close();

    int[] ans = new int[N];

    for (int i = 0; i < Q; i++) {
      for (int j = L[i]; j < R[i]+1; j++) {
        ans[j] = T[i];
      }
    }
    
    for (int i = 0; i < N; i++) {
      System.out.println(ans[i]);
    }

  }

}