import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int a = sc.nextInt();
    int b = sc.nextInt();

    sc.close();

    int count = 0;

    if (a <= b){
      if (5 <= (b - a)) {
        count = 10 + a - b;
      } else {
        count = b - a;
      }
    } else {
      if (5 <= (a - b)) {
        count = 10 + b - a;
      } else {
        count = a - b;
      }
    }

    System.out.println(count);

  }

}