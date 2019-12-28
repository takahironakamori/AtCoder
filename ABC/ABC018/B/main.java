import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    String[] sArr = S.split("");
    String[] dArr = new String[sArr.length];

    int N = sc.nextInt();
    Integer[] l = new Integer[N];
    Integer[] r = new Integer[N];

    for (int i = 0; i < N; i++) {
      l[i] = sc.nextInt();
      r[i] = sc.nextInt();
    }

    for (int i = 0; i < N; i++ ) {
      for (int j = l[i]; j <= r[i]; j++){
        dArr[j - 1] = sArr[j - 1];
      }
      int k = 1;
      for (int j = l[i]; j <= r[i]; j++){
        sArr[j - 1] = dArr[r[i] - k];
        k++;
      }
    }

    for ( int i = 0; i < sArr.length; i++ ) {
      System.out.print(sArr[i]);
    }

    System.out.println("");

  }
}