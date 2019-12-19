import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int S = sc.nextInt();
    int T = sc.nextInt();
    int W = sc.nextInt();
    Integer arr[] = new Integer[N];
    int count = 0;
    arr[0] = W;
    
    if ((S <= arr[0]) && (arr[0] <= T)) {
        count++;
      }
    
    for (int i=1; i<N; i++) {
      arr[i] = sc.nextInt() + arr[i-1];
      if ((S <= arr[i]) && (arr[i] <= T)) {
        count++;
      }
    }
    
    System.out.println(count);
    
  }
}
