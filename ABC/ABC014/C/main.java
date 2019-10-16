import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    int[] NG = new int[301];

    for (int i = 0; i < 3; i++) {
      int ng_ = sc.nextInt();
      NG[ng_] = 1;
    }

    sc.close();
    
    int[] dp = new int[N+10];

    Arrays.fill(dp, 10000000);

    if (NG[N] != 1) {
      dp[N] = 0;
    }

    for (int i = N-1; 0 <= i; i--) {

      if (NG[i] == 1){
        continue;
      }

      dp[i] = Math.min(dp[i+1]+1, Math.min(dp[i+2]+1, dp[i+3]+1));
      
    }

    if (dp[0] <= 100) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }
  
  }

}