import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int A = sc.nextInt();
    int B = sc.nextInt();

    sc.close();

    int count = 1;
    int sum = A;

    while (sum < B) {
      count++;
      sum = sum - 1 + A;
    }

    if (B == 1){
      count = 0;
    }
    
    System.out.println(count);

  }

}