import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int count = 0;

    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      switch (a) {
        case 2:
          count++;
          break;
        case 4:
          count++;
          break;
        case 5:
          count = count + 2;
          break;
        case 6:
          count = count + 3;
          break;
        case 8:
          count++;
          break;
      }
    }

    System.out.println(count);

  }
}
