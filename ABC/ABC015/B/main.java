import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    Integer[] arr = new Integer[N];
    double count = 0;
    double sum = 0;

    for (int i = 0; i < N; i++) {
      arr[i] = sc.nextInt();
    }

    for ( int i = 0; i < N; i++ ) {
      if ( arr[i] != 0 ) {
        count++;
        sum += arr[i];
      }
    }
    
    System.out.println((int)Math.ceil(sum/count));

  }
}