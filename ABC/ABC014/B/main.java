import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int X = sc.nextInt();
    Integer[] arr = new Integer[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }

    for (int i = 0; i < n; i++) {
      if ((X & (1 << i)) != 0) {
        sum += arr[i];
      }
    }

    System.out.println(sum);

  }
}